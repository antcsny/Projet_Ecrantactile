#ifndef MORPION_2VIEW_HPP
#define MORPION_2VIEW_HPP

#include <gui_generated/morpion_screen/MorpionViewBase.hpp>
#include <gui/morpion_screen/MorpionPresenter.hpp>

void uart1_send_frame(int function, char data);
void RxTTTTask(void *argument);

class MorpionView : public MorpionViewBase
{
public:
    MorpionView();
    virtual ~MorpionView() {}
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
    void PlayMove(Drawable& Button, char rxcmd);
    virtual int verifier_victoire();
    void initialisation();
    virtual void init();
    virtual void quit_game();
    void buttonTouchable(bool act);

    friend void RxTTTTask(void *argument);
protected:
};

#endif // MORPION_2VIEW_HPP
