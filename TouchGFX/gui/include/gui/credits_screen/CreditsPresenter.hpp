#ifndef CREDITSPRESENTER_HPP
#define CREDITSPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class CreditsView;

class CreditsPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    CreditsPresenter(CreditsView& v);

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

    virtual ~CreditsPresenter() {}

private:
    CreditsPresenter();

    CreditsView& view;
};

#endif // CREDITSPRESENTER_HPP
