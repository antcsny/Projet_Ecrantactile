#ifndef MORPION_2VIEW_HPP
#define MORPION_2VIEW_HPP

#include <gui_generated/morpion_2_screen/Morpion_2ViewBase.hpp>
#include <gui/morpion_2_screen/Morpion_2Presenter.hpp>

class Morpion_2View : public Morpion_2ViewBase
{
public:
    Morpion_2View();
    virtual ~Morpion_2View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void restart_button();
    virtual void button_0_0();
    virtual void button_0_1();
    virtual void button_0_2();
    virtual void button_1_0();
    virtual void button_1_1();
    virtual void button_1_2();
    virtual void button_2_0();
    virtual void button_2_1();
    virtual void button_2_2();
    void PlayMove(Drawable& Button);
    virtual int verifier_victoire();
    void win_button();
    void initialisation();
    virtual void init();
    void buttonTouchable(bool act);
protected:
};

#endif // MORPION_2VIEW_HPP
