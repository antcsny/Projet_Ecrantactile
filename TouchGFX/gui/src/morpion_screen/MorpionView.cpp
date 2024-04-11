#include <gui/morpion_screen/MorpionView.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <gui/menumorpion_screen/MenuMorpionView.hpp>
#include <gui/menumorpion_screen/MenuMorpionPresenter.hpp>
#include <main.h>
#include "cmsis_os.h"
#include <stm32h7xx_hal.h>

int turn=0;
Croix* Croix[5];
Cercle* Cercle[4];
char tableau[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int res = -1;
char RXLoopActive=0;

extern UART_HandleTypeDef huart1;
extern char upd_screen;
extern char recu;
extern uint8_t rx_data;
extern int playerID;

MorpionView objMp;

const TickType_t looptttxDelay = 100 / portTICK_PERIOD_MS, xDelay = 50 / portTICK_PERIOD_MS;	// freertos delay
osThreadId_t RxTTTTaskHandle;
const osThreadAttr_t rxtttTask_attributes = {
  .name = "RxTicTacToeTask",
  .stack_size = 1024 * 4,
  .priority = (osPriority_t) osPriorityNormal,
};

MorpionView::MorpionView()
{
	/*Initialization of pieces*/
	Croix[0]=&Croix_1;
	Cercle[0]=&Cercle_1;
	Croix[1]=&Croix_2;
	Cercle[1]=&Cercle_2;
	Croix[2]=&Croix_3;
	Cercle[2]=&Cercle_3;
	Croix[3]=&Croix_4;
	Cercle[3]=&Cercle_4;
	Croix[4]=&Croix_5;
	if(playerID==2){
		Recommencer.setVisible(false);
		Recommencer.invalidate();
		Restart.setVisible(false);
		Restart.invalidate();
	}
}

void MorpionView::setupScreen()
{
    MorpionViewBase::setupScreen();
}

void MorpionView::tearDownScreen()
{
    MorpionViewBase::tearDownScreen();
}

void MorpionView::restart_button()
{
	if(playerID!=0)
		uart1_send_frame(0x01,0x09);
	initialisation();
}

void MorpionView::PlayMove(Drawable& Button, char rxcmd)
{
	int X= Button.getX(),Y= Button.getY();
	int posCol=(X-80)/162, posLin=(Y-134)/112;
	Button.setTouchable(0);
	if(turn%2==0){
		Croix[turn/2]->moveTo(X,Y);
		tableau[posLin][posCol]='x';	// Joueur 1 : x
		Joueur_1.setVisible(false);
		Joueur_1.invalidate();
		Joueur_2.setVisible(true);
		Joueur_2.invalidate();
	}
	if(turn%2==1){
		Cercle[turn/2]->moveTo(X,Y);
		tableau[posLin][posCol]='o';	// Joueur 2 : o
		Joueur_1.setVisible(true);
		Joueur_1.invalidate();
		Joueur_2.setVisible(false);
		Joueur_2.invalidate();
	}
	turn++;
	/* -------- Condition de victoire -------- */
	res = objMp.verifier_victoire();
	if (res == 1){
		objMp.buttonTouchable(0);
		if(turn%2==0){
			win_p2.setVisible(true);
			win_p2.invalidate();
		}
		else if(turn%2==1) {
			win_p1.setVisible(true);
			win_p1.invalidate();
		}
	}
	else if(res == 0) {
		draw.setVisible(true);
		draw.invalidate();
	}
	/* -------- Adaptation reseau -------- */
	if(playerID!=0){
		if(rxcmd==0)	// si Playmove pas appelé depuis l'uart
			uart1_send_frame(0x01,(posCol+posLin*3));
		if(rxcmd==1){	// le joueur sur l'autre carte a joué
			upd_screen=1;
			objMp.buttonTouchable(1);	// on donne la possibilité de jouer
		}
		if(rxcmd==0){	// le joueur sur cette carte a joué
			objMp.buttonTouchable(0);	// on empech de jouer à nouveau
		}
	}
	/*Le joueur a fini son tour*/
}

int MorpionView::verifier_victoire(){
	for (int i = 0; i < 3; i++) {
		// vérifier victoire ligne
		if (tableau[i][0] == tableau[i][1] && tableau[i][1] == tableau[i][2]) {
			return 1;
		}
		// vérifier victoire colonne
		if (tableau[0][i] == tableau[1][i] && tableau[1][i] == tableau[2][i]) {
	        return 1;
		}
	}

	// vérifier victoire diagonale
	if (tableau[0][0] == tableau[1][1] && tableau[1][1] == tableau[2][2]) {
		return 1;
	}
	if (tableau[0][2] == tableau[1][1] && tableau[1][1] == tableau[2][0]) {
		return 1;
	}
	// match nul
	if (turn == 9) {
		return 0;
	}
    return -1;
}

void MorpionView::button_0_0()
{
	MorpionView::PlayMove(Button_0_0,0);
}

void MorpionView::button_0_1()
{
	MorpionView::PlayMove(Button_0_1,0);
}

void MorpionView::button_0_2()
{
	MorpionView::PlayMove(Button_0_2,0);
}

void MorpionView::button_1_0()
{
	MorpionView::PlayMove(Button_1_0,0);
}

void MorpionView::button_1_1()
{
	MorpionView::PlayMove(Button_1_1,0);
}

void MorpionView::button_1_2()
{
	MorpionView::PlayMove(Button_1_2,0);
}

void MorpionView::button_2_0()
{
	MorpionView::PlayMove(Button_2_0,0);
}

void MorpionView::button_2_1()
{
	MorpionView::PlayMove(Button_2_1,0);
}

void MorpionView::button_2_2()
{
	MorpionView::PlayMove(Button_2_2,0);
}

void MorpionView::buttonTouchable(bool act){
	Button_0_0.setTouchable(act);
	Button_0_1.setTouchable(act);
	Button_0_2.setTouchable(act);
	Button_1_0.setTouchable(act);
	Button_1_1.setTouchable(act);
	Button_1_2.setTouchable(act);
	Button_2_0.setTouchable(act);
	Button_2_1.setTouchable(act);
	Button_2_2.setTouchable(act);
}

void MorpionView::init()
{
	MorpionView::initialisation();
}

void MorpionView::quit_game(){
	if(playerID!=0){
		uart1_send_frame(0x01,0x0A);
		vTaskDelay(xDelay);
		__HAL_UART_DISABLE(&huart1);
	}
	application().gotoMenuMorpionScreenSlideTransitionNorth();
}

void MorpionView::initialisation(){
	if(playerID!=0){
		vTaskDelay(xDelay);
		if(playerID==1){objMp.buttonTouchable(1);}
		if(playerID==2){objMp.buttonTouchable(0);}
		__HAL_UART_ENABLE(&huart1);
		HAL_UART_Receive_IT(&huart1,&rx_data,1);
		RxTTTTaskHandle = osThreadNew(RxTTTTask, NULL, &rxtttTask_attributes);
	}
	else
		objMp.buttonTouchable(1);
	Croix_1.moveTo(-156,-26);
	Croix_2.moveTo(-156,-26);
	Croix_3.moveTo(-156,-26);
	Croix_4.moveTo(-156,-26);
	Croix_5.moveTo(-156,-26);
	Cercle_1.moveTo(-156,-26);
	Cercle_2.moveTo(-156,-26);
	Cercle_3.moveTo(-156,-26);
	Cercle_4.moveTo(-156,-26);
	win_p1.setVisible(false);
	win_p1.invalidate();
	win_p2.setVisible(false);
	win_p2.invalidate();
	draw.setVisible(false);
	draw.invalidate();
	Joueur_1.setVisible(true);
	Joueur_1.invalidate();
	Joueur_2.setVisible(false);
	Joueur_2.invalidate();
	turn=0;
	res=-1;
	char valeur = '1';
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			tableau[i][j] = valeur;
			valeur ++;
		}
	}
}


/* Brief uart1_send_frame : Function to send formated byte for the update of Morpion
* 00 : game gestion
* 			0x01 : quit, 0x02 : start/restart,
* 			0x03 : host request, 0x04 : host acknowledge, 0x05 : abort host/join,
* 01 : game update
* 			id pressed button : 0x00 - 0x08
* 			0x09 : restart
* 			0x0A : quit
*/
void uart1_send_frame(int function, char data){
	function &=0x3;	// function on 2 bits
	data &=0x3F;	// data on 6 bits
	SendByte_Uart1(function << 6 | data);
}

void RxTTTTask(void *argument){
	RXLoopActive=1;
	while(RXLoopActive){
		if(recu==1){
			recu=0;
			switch (rx_data){
				case 0x40:
					objMp.PlayMove(objMp.Button_0_0,1);
					break;
				case 0x41:
					objMp.PlayMove(objMp.Button_0_1,1);
					break;
				case 0x42:
					objMp.PlayMove(objMp.Button_0_2,1);
					break;
				case 0x43:
					objMp.PlayMove(objMp.Button_1_0,1);
					break;
				case 0x44:
					objMp.PlayMove(objMp.Button_1_1,1);
					break;
				case 0x45:
					objMp.PlayMove(objMp.Button_1_2,1);
					break;
				case 0x46:
					objMp.PlayMove(objMp.Button_2_0,1);
					break;
				case 0x47:
					objMp.PlayMove(objMp.Button_2_1,1);
					break;
				case 0x48:
					objMp.PlayMove(objMp.Button_2_2,1);
					break;
				case 0x49:
					objMp.initialisation();
					upd_screen=10;
					break;
				case 0x4A:
					objMp.quit_game();
					RXLoopActive=0;
					break;
			}
		}
		else if(RXLoopActive!=0)
			vTaskDelay(looptttxDelay);
	}
	vTaskDelete(NULL);
}
