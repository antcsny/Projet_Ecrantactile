#include <gui/mainmenu_screen/MainMenuView.hpp>
#include <gui_generated/morpion_2_screen/Morpion_2ViewBase.hpp>
#include <gui/morpion_2_screen/Morpion_2View.hpp>

MainMenuView::MainMenuView()
{

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
}

