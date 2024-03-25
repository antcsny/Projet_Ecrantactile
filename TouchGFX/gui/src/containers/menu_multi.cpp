#include <gui/containers/menu_multi.hpp>

#include <gui/mainmenu_screen/MainMenuView.hpp>
#include <gui/morpion_2_screen/Morpion_2View.hpp>
#include "cmsis_os.h"
#include <main.h>

int status=1;
extern char recu;
extern uint8_t rx_data;
menu_multiBase obj;

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
	uart1_send_frame(0x00,0x03);	// host request
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
	uart1_send_frame(0x00,0x04);	//join request
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
}

/* Tasks FreeRTos for polling receiving a character*/
void Host_Task(void *argument){
	status=1;
	while(status==1){
		if(recu==1){
			recu=0;
			if(rx_data==0x04){	// join request polling
				uart1_send_frame(0x00,0x07);
			}
			if(rx_data==0x06){	// host acknowledge
				obj.launchGame();
				status=2;
			}
		}
	}
	vTaskDelete(NULL);
}
void Join_Task(void *argument){
	status=1;
	while(status==1){
		if(recu==1){
			recu=0;
			if(rx_data==0x03){	// host request polling
				uart1_send_frame(0x00,0x06);
			}
			if(rx_data==0x07){	// join acknowledge
				obj.launchGame();
				status=2;
			}
		}
	}
	vTaskDelete(NULL);
}

