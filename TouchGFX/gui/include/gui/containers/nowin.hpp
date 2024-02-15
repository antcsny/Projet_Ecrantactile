#ifndef NOWIN_HPP
#define NOWIN_HPP

#include <gui_generated/containers/nowinBase.hpp>

class nowin : public nowinBase
{
public:
    nowin();
    virtual ~nowin() {}

    virtual void initialize();
protected:
};

#endif // NOWIN_HPP
