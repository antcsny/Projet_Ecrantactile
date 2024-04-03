#include <gui/menumorpion_screen/MenuMorpionView.hpp>
#include <gui_generated/morpion_screen/MorpionViewBase.hpp>
#include <gui_generated/menumorpion_screen/MenuMorpionViewBase.hpp>
#include <main.h>

extern int playerID;

MenuMorpionView::MenuMorpionView()
{
	nextGame.setTouchable(1);
	previousGame.setTouchable(1);
}

void MenuMorpionView::setupScreen()
{
    MenuMorpionViewBase::setupScreen();
}

void MenuMorpionView::tearDownScreen()
{
    MenuMorpionViewBase::tearDownScreen();
}

void MenuMorpionView::multiplayer_game(){
	multiplayerMenu.setVisible(true);
	multiplayerMenu.invalidate();
	singleplayer.setTouchable(false);
	nextGame.setTouchable(0);
	previousGame.setTouchable(0);
}

void MenuMorpionView::singleplayer_game(){
	playerID=0;
}

