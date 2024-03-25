#ifndef CREDITSVIEW_HPP
#define CREDITSVIEW_HPP

#include <gui_generated/credits_screen/CreditsViewBase.hpp>
#include <gui/credits_screen/CreditsPresenter.hpp>

class CreditsView : public CreditsViewBase
{
public:
    CreditsView();
    virtual ~CreditsView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CREDITSVIEW_HPP
