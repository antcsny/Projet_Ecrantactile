#ifndef MAINMENUVIEW_HPP
#define MAINMENUVIEW_HPP

#include <gui_generated/menumorpion_screen/MenuMorpionViewBase.hpp>
#include <gui/menumorpion_screen/MenuMorpionPresenter.hpp>
#include <gui/morpion_screen/MorpionView.hpp>

class MenuMorpionView : public MenuMorpionViewBase
{
public:
    MenuMorpionView();
    virtual ~MenuMorpionView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void multiplayer_game();
    virtual void singleplayer_game();
protected:
};

#endif // MAINMENUVIEW_HPP
