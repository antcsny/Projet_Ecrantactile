#ifndef MENUBATTLESHIPVIEW_HPP
#define MENUBATTLESHIPVIEW_HPP

#include <gui_generated/menubattleship_screen/MenuBattleShipViewBase.hpp>
#include <gui/menubattleship_screen/MenuBattleShipPresenter.hpp>

class MenuBattleShipView : public MenuBattleShipViewBase
{
public:
    MenuBattleShipView();
    virtual ~MenuBattleShipView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // MENUBATTLESHIPVIEW_HPP
