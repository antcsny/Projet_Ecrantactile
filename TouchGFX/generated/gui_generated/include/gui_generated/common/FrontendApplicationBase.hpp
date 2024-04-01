/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    virtual void changeToStartScreen()
    {
        gotoMainMenuScreenNoTransition();
    }

    // Morpion
    void gotoMorpionScreenSlideTransitionSouth();

    // MainMenu
    void gotoMainMenuScreenNoTransition();

    void gotoMainMenuScreenSlideTransitionNorth();

    void gotoMainMenuScreenSlideTransitionWest();

    void gotoMainMenuScreenSlideTransitionEast();

    // BattleShip
    void gotoBattleShipScreenSlideTransitionEast();

    // Credits
    void gotoCreditsScreenSlideTransitionWest();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // Morpion
    void gotoMorpionScreenSlideTransitionSouthImpl();

    // MainMenu
    void gotoMainMenuScreenNoTransitionImpl();

    void gotoMainMenuScreenSlideTransitionNorthImpl();

    void gotoMainMenuScreenSlideTransitionWestImpl();

    void gotoMainMenuScreenSlideTransitionEastImpl();

    // BattleShip
    void gotoBattleShipScreenSlideTransitionEastImpl();

    // Credits
    void gotoCreditsScreenSlideTransitionWestImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
