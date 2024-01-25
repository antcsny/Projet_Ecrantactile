#ifndef MORPION_2PRESENTER_HPP
#define MORPION_2PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Morpion_2View;

class Morpion_2Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Morpion_2Presenter(Morpion_2View& v);

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

    virtual ~Morpion_2Presenter() {}

private:
    Morpion_2Presenter();

    Morpion_2View& view;
};

#endif // MORPION_2PRESENTER_HPP
