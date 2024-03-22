#include <gui/morpion_2_screen/Morpion_2View.hpp>
#include <gui_generated/morpion_2_screen/Morpion_2ViewBase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <gui/mainmenu_screen/MainMenuView.hpp>
#include <gui/mainmenu_screen/MainMenuPresenter.hpp>
#include <main.h>
#include <stm32h7xx_hal.h>

int turn=0;
Croix* Croix[5];
Cercle* Cercle[4];
char tableau[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char valeur = '1';
uint8_t dataT = 0x43;	//42 : 8E ou 71, 43 : D3 ou CB
int res = -1;

Morpion_2View::Morpion_2View()
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
	if(playerID>=1){
		Recommencer.setVisible(false);
		Recommencer.invalidate();
		Restart.setVisible(false);
		Restart.invalidate();
	}
}

void Morpion_2View::setupScreen()
{
    Morpion_2ViewBase::setupScreen();
}

void Morpion_2View::tearDownScreen()
{
    Morpion_2ViewBase::tearDownScreen();
}


void Morpion_2View::restart_button()
{
	initialisation();
	SendByte_Uart1(dataT);
}

void Morpion_2View::win_button()
{
	Morpion_2View::buttonTouchable(0);
	if(playerID>=1)
	{
		Recommencer.setVisible(true);
		Recommencer.invalidate();
		Restart.setVisible(true);
		Restart.invalidate();
	}
}

void Morpion_2View::PlayMove(Drawable& Button)
{
	Button.setTouchable(0);
	int X= Button.getX(),Y= Button.getY();
	int posCol=(X-80)/162, posLin=(Y-134)/112;
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
	res = Morpion_2View::verifier_victoire();

		if (res == 1){
			if(turn%2==0){
				win_p2.setVisible(true);
				win_p2.invalidate();
				Morpion_2View::win_button();
			}
			else if(turn%2==1) {
				win_p1.setVisible(true);
				win_p1.invalidate();
				Morpion_2View::win_button();
			}
		}
		else if(res == 0) {
			draw.setVisible(true);
			draw.invalidate();
		}
	if(playerID%2==1){
		Morpion_2View::buttonTouchable(0);
	}
	if(playerID%2==0){
		Morpion_2View::buttonTouchable(1);
	}
}

int Morpion_2View::verifier_victoire()
{
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

void Morpion_2View::button_0_0()
{
	Morpion_2View::PlayMove(Button_0_0);
}

void Morpion_2View::button_0_1()
{
	Morpion_2View::PlayMove(Button_0_1);
}

void Morpion_2View::button_0_2()
{
	Morpion_2View::PlayMove(Button_0_2);
}

void Morpion_2View::button_1_0()
{
	Morpion_2View::PlayMove(Button_1_0);
}

void Morpion_2View::button_1_1()
{
	Morpion_2View::PlayMove(Button_1_1);
}

void Morpion_2View::button_1_2()
{
	Morpion_2View::PlayMove(Button_1_2);
}

void Morpion_2View::button_2_0()
{
	Morpion_2View::PlayMove(Button_2_0);
}

void Morpion_2View::button_2_1()
{
	Morpion_2View::PlayMove(Button_2_1);
}

void Morpion_2View::button_2_2()
{
	Morpion_2View::PlayMove(Button_2_2);
}

void Morpion_2View::init()
{
	Morpion_2View::initialisation();
}

void Morpion_2View::initialisation(){
	if(playerID<=1)
	{
		Morpion_2View::buttonTouchable(1);
	}
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

void Morpion_2View::buttonTouchable(bool act){
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
