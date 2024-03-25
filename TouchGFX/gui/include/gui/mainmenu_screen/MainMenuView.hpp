#ifndef MAINMENUVIEW_HPP
#define MAINMENUVIEW_HPP

#include <gui_generated/mainmenu_screen/MainMenuViewBase.hpp>
#include <gui/mainmenu_screen/MainMenuPresenter.hpp>

static int playerID;

class MainMenuView : public MainMenuViewBase
{
public:
    MainMenuView();
    virtual ~MainMenuView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void multiplayer_game();
    virtual void singleplayer_game();
    virtual void testfunction();
protected:
};

#endif // MAINMENUVIEW_HPP
