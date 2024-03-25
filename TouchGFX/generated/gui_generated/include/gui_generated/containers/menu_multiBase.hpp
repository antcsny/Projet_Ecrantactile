/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MENU_MULTIBASE_HPP
#define MENU_MULTIBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class menu_multiBase : public touchgfx::Container
{
public:
    menu_multiBase();
    virtual ~menu_multiBase();
    virtual void initialize();

    /*
     * Custom Actions
     */
    virtual void launchGame();

    /*
     * Virtual Action Handlers
     */
    virtual void host_game()
    {
        // Override and implement this function in menu_multi
    }
    virtual void join_game()
    {
        // Override and implement this function in menu_multi
    }
    virtual void cancel_game()
    {
        // Override and implement this function in menu_multi
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box cache;
    touchgfx::BoxWithBorder boxWithBorder2;
    touchgfx::ButtonWithLabel cancel_action_button;
    touchgfx::ButtonWithLabel cancel_button;
    touchgfx::ButtonWithLabel client_button;
    touchgfx::ButtonWithLabel host_button;
    touchgfx::TextArea textArea;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<menu_multiBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // MENU_MULTIBASE_HPP
