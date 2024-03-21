#include <gui/containers/menu_multi.hpp>
#include <gui/mainmenu_screen/MainMenuView.hpp>

int CancelState=0;

menu_multi::menu_multi()
{

}

void menu_multi::initialize()
{
    menu_multiBase::initialize();
}

void menu_multi::host_game()
{
	CancelState=1;
	playerID=1;
	cancel_button.setVisible(false);
	cancel_button.invalidate();
	cancel_action_button.setVisible(true);
	cancel_action_button.invalidate();
	client_button.setVisible(false);
	client_button.invalidate();
	host_button.setVisible(false);
	host_button.invalidate();
	//textArea.setText("Hosting game - Waiting for player...");
}

void menu_multi::join_game()
{
	playerID=2;
	CancelState=1;
	cancel_button.setVisible(false);
	cancel_button.invalidate();
	cancel_action_button.setVisible(true);
	cancel_action_button.invalidate();
	client_button.setVisible(false);
	client_button.invalidate();
	host_button.setVisible(false);
	host_button.invalidate();
}

void menu_multi::cancel_game()
{
	CancelState=0;
	cancel_button.setVisible(true);
	cancel_button.invalidate();
	cancel_action_button.setVisible(false);
	cancel_action_button.invalidate();
	client_button.setVisible(true);
	client_button.invalidate();
	host_button.setVisible(true);
	host_button.invalidate();
}
