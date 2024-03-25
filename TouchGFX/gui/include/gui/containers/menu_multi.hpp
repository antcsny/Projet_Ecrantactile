#ifndef MENU_MULTI_HPP
#define MENU_MULTI_HPP

#include <gui_generated/containers/menu_multiBase.hpp>

void Host_Task(void *argument);
void Join_Task(void *argument);

class menu_multi : public menu_multiBase
{
public:
    menu_multi();
    virtual ~menu_multi() {}

    virtual void initialize();
    virtual void host_game();
    virtual void join_game();
    virtual void cancel_game();
protected:
};

#endif // MENU_MULTI_HPP
