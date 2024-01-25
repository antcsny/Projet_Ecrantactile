#include <gui/morpion_2_screen/Morpion_2View.hpp>
#include <gui_generated/morpion_2_screen/Morpion_2ViewBase.hpp>

int turn=0;
Croix* Croix[5];
Cercle* Cercle[4];

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
	Button_0_0.moveTo(80,134);
	Button_0_1.moveTo(241,134);
	Button_0_2.moveTo(404,134);
	Button_1_0.moveTo(80,245);
	Button_1_1.moveTo(241,245);
	Button_1_2.moveTo(404,245);
	Button_2_0.moveTo(80,358);
	Button_2_1.moveTo(241,358);
	Button_2_2.moveTo(404,358);
	Croix_1.moveTo(-156,-26);
	Croix_2.moveTo(-156,-26);
	Croix_3.moveTo(-156,-26);
	Croix_4.moveTo(-156,-26);
	Croix_5.moveTo(-156,-26);
	Cercle_1.moveTo(-156,-26);
	Cercle_2.moveTo(-156,-26);
	Cercle_3.moveTo(-156,-26);
	Cercle_4.moveTo(-156,-26);
	turn=0;
}

void Morpion_2View::PlayMove(int X, int Y)
{
	if(turn%2==0)
		Croix[turn/2]->moveTo(X,Y);
	if(turn%2==1)
		Cercle[turn/2]->moveTo(X,Y);
	turn++;
}


void Morpion_2View::button_0_0()
{
	Morpion_2View::PlayMove(Button_0_0.getX(),Button_0_0.getY());
	Button_0_0.setTouchable(0);
}

void Morpion_2View::button_0_1()
{
	Morpion_2View::PlayMove(Button_0_1.getX(),Button_0_1.getY());
	Button_0_1.setTouchable(0);
}

void Morpion_2View::button_0_2()
{
	Morpion_2View::PlayMove(Button_0_2.getX(),Button_0_2.getY());
	Button_0_2.setTouchable(0);
}

void Morpion_2View::button_1_0()
{
	Morpion_2View::PlayMove(Button_1_0.getX(),Button_1_0.getY());
	Button_1_0.setTouchable(0);
}

void Morpion_2View::button_1_1()
{
	Morpion_2View::PlayMove(Button_1_1.getX(),Button_1_1.getY());
	Button_1_1.setTouchable(0);
}

void Morpion_2View::button_1_2()
{
	Morpion_2View::PlayMove(Button_1_2.getX(),Button_1_2.getY());
	Button_1_2.setTouchable(0);
}

void Morpion_2View::button_2_0()
{
	Morpion_2View::PlayMove(Button_2_0.getX(),Button_2_0.getY());
	Button_2_0.setTouchable(0);
}

void Morpion_2View::button_2_1()
{
	Morpion_2View::PlayMove(Button_2_1.getX(),Button_2_1.getY());
	Button_2_1.setTouchable(0);
}

void Morpion_2View::button_2_2()
{
	Morpion_2View::PlayMove(Button_2_2.getX(),Button_2_2.getY());
	Button_2_2.setTouchable(0);
}
