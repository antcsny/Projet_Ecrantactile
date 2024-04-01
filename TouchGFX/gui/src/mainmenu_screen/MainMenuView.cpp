#include <gui/mainmenu_screen/MainMenuView.hpp>
#include <gui_generated/morpion_2_screen/Morpion_2ViewBase.hpp>
#include <gui_generated/mainmenu_screen/MainMenuViewBase.hpp>
#include <main.h>

extern int playerID;

MainMenuView::MainMenuView()
{
	nextGame.setTouchable(1);
	previousGame.setTouchable(1);
}

void MainMenuView::setupScreen()
{
    MainMenuViewBase::setupScreen();
}

void MainMenuView::tearDownScreen()
{
    MainMenuViewBase::tearDownScreen();
}

void MainMenuView::multiplayer_game(){
	multiplayerMenu.setVisible(true);
	multiplayerMenu.invalidate();
	singleplayer.setTouchable(false);
	nextGame.setTouchable(0);
	previousGame.setTouchable(0);
}

void MainMenuView::singleplayer_game(){
	playerID=0;
}

