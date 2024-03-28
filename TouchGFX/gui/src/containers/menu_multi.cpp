#include <gui/containers/menu_multi.hpp>

#include <gui/mainmenu_screen/MainMenuView.hpp>
#include <gui/morpion_2_screen/Morpion_2View.hpp>
#include "cmsis_os.h"
#include <main.h>
#include <stm32h7xx_hal.h>

extern char recu;
extern uint8_t rx_data;
extern UART_HandleTypeDef huart1;
menu_multiBase obj;
const TickType_t xDelay = 500 / portTICK_PERIOD_MS;
char status;

osThreadId_t hostTaskHandle;
const osThreadAttr_t hostTask_attributes = {
  .name = "HostPollingTask",
  .stack_size = 1024 * 4,
  .priority = (osPriority_t) osPriorityBelowNormal,
};
osThreadId_t joinTaskHandle;
const osThreadAttr_t joinTask_attributes = {
  .name = "JoinPollingTask",
  .stack_size = 1024 * 4,
  .priority = (osPriority_t) osPriorityBelowNormal,
};

menu_multi::menu_multi()
{

}

void menu_multi::initialize()
{
    menu_multiBase::initialize();
}

void menu_multi::host_game()
{
	playerID=1;
	cancel_button.setVisible(false);
	cancel_button.invalidate();
	cancel_action_button.setVisible(true);
	cancel_action_button.invalidate();
	client_button.setVisible(false);
	client_button.invalidate();
	host_button.setVisible(false);
	host_button.invalidate();
	hostTaskHandle = osThreadNew(Host_Task, NULL, &hostTask_attributes);
}

void menu_multi::join_game()
{
	playerID=2;
	cancel_button.setVisible(false);
	cancel_button.invalidate();
	cancel_action_button.setVisible(true);
	cancel_action_button.invalidate();
	client_button.setVisible(false);
	client_button.invalidate();
	host_button.setVisible(false);
	host_button.invalidate();
	joinTaskHandle = osThreadNew(Join_Task, NULL, &joinTask_attributes);
}

void menu_multi::cancel_game()
{
	cancel_button.setVisible(true);
	cancel_button.invalidate();
	cancel_action_button.setVisible(false);
	cancel_action_button.invalidate();
	client_button.setVisible(true);
	client_button.invalidate();
	host_button.setVisible(true);
	host_button.invalidate();
	osThreadTerminate(hostTaskHandle);
	osThreadTerminate(joinTaskHandle);
	recu=0;		// abort existing requests
	rx_data=0x00;
}

/* Tasks FreeRTos for polling receiving a character*/
void Host_Task(void *argument){
	while(1){
		uart1_send_frame(0x00,0x03);	// host request
		if(recu==1){
			recu=0;
			if(rx_data==0x04){	// host acknowledge ?
				obj.launchGame();
				vTaskDelete(NULL);
				HAL_UART_Receive_IT(&huart1,&rx_data,1);
			}
		}
		vTaskDelay(xDelay);
	}
}
void Join_Task(void *argument){
	while(1){
		if(recu==1){
			recu=0;
			if(rx_data==0x03){	// host request polling
				uart1_send_frame(0x00,0x04);
				obj.launchGame();
				vTaskDelete(NULL);
				HAL_UART_Receive_IT(&huart1,&rx_data,1);
			}
		}
		vTaskDelay(xDelay);
	}
}
