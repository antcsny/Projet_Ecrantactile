/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MORPIONVIEWBASE_HPP
#define MORPIONVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/morpion_screen/MorpionPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <gui/containers/Grille.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <gui/containers/Croix.hpp>
#include <gui/containers/Cercle.hpp>
#include <gui/containers/win_a.hpp>
#include <gui/containers/win_b.hpp>
#include <gui/containers/nowin.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/FadeAnimator.hpp>

class MorpionViewBase : public touchgfx::View<MorpionPresenter>
{
public:
    MorpionViewBase();
    virtual ~MorpionViewBase();
    virtual void setupScreen();
    virtual void transitionBegins();

    /*
     * Custom Actions
     */
    virtual void init()
    {
        // Override and implement this function in Screen1
    }
    
    virtual void quit_game();

    /*
     * Virtual Action Handlers
     */
    virtual void restart_button()
    {
        // Override and implement this function in Morpion
    }
    virtual void button_0_0()
    {
        // Override and implement this function in Morpion
    }
    virtual void button_0_1()
    {
        // Override and implement this function in Morpion
    }
    virtual void button_0_2()
    {
        // Override and implement this function in Morpion
    }
    virtual void button_1_0()
    {
        // Override and implement this function in Morpion
    }
    virtual void button_1_1()
    {
        // Override and implement this function in Morpion
    }
    virtual void button_1_2()
    {
        // Override and implement this function in Morpion
    }
    virtual void button_2_0()
    {
        // Override and implement this function in Morpion
    }
    virtual void button_2_1()
    {
        // Override and implement this function in Morpion
    }
    virtual void button_2_2()
    {
        // Override and implement this function in Morpion
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::ScalableImage Background;
    Grille Grille_main;
    touchgfx::TextArea Titre;
    touchgfx::TextArea Quitter;
    touchgfx::TextArea Recommencer;
    touchgfx::TextArea Joueur_2;
    touchgfx::TextArea Joueur_1;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  Quit;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  Restart;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  Button_2_2;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  Button_2_1;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  Button_2_0;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  Button_1_2;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  Button_1_1;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  Button_1_0;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  Button_0_2;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  Button_0_1;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  Button_0_0;
    Croix Croix_1;
    Cercle Cercle_1;
    Cercle Cercle_2;
    Croix Croix_2;
    Cercle Cercle_3;
    Croix Croix_3;
    Cercle Cercle_4;
    Croix Croix_4;
    Croix Croix_5;
    win_a win_p1;
    win_b win_p2;
    nowin draw;

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 9600;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

    /*
     * Callback Declarations
     */
    touchgfx::Callback<MorpionViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // MORPIONVIEWBASE_HPP