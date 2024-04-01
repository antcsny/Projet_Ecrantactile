#ifndef MORPION_2PRESENTER_HPP
#define MORPION_2PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class MorpionView;

class MorpionPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    MorpionPresenter(MorpionView& v);

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

    virtual ~MorpionPresenter() {}

private:
    MorpionPresenter();

    MorpionView& view;
};

#endif // MORPION_2PRESENTER_HPP
