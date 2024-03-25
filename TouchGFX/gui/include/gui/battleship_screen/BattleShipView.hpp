#ifndef BATTLESHIPVIEW_HPP
#define BATTLESHIPVIEW_HPP

#include <gui_generated/battleship_screen/BattleShipViewBase.hpp>
#include <gui/battleship_screen/BattleShipPresenter.hpp>

class BattleShipView : public BattleShipViewBase
{
public:
    BattleShipView();
    virtual ~BattleShipView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // BATTLESHIPVIEW_HPP
