#ifndef MENUBATTLESHIPPRESENTER_HPP
#define MENUBATTLESHIPPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class MenuBattleShipView;

class MenuBattleShipPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    MenuBattleShipPresenter(MenuBattleShipView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~MenuBattleShipPresenter() {}

private:
    MenuBattleShipPresenter();

    MenuBattleShipView& view;
};

#endif // MENUBATTLESHIPPRESENTER_HPP
