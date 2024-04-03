/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/credits_screen/CreditsViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

CreditsViewBase::CreditsViewBase() :
    flexButtonCallback(this, &CreditsViewBase::flexButtonCallbackHandler)
{
    __background.setPosition(0, 0, 640, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    image1.setXY(-91, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_800X480_WAVES_ID));
    add(image1);

    boxWithBorder1.setPosition(173, 14, 294, 59);
    boxWithBorder1.setColor(touchgfx::Color::getColorFromRGB(12, 27, 55));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    boxWithBorder1.setBorderSize(5);
    add(boxWithBorder1);

    textArea1.setXY(267, 25);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_C3PC));
    add(textArea1);

    boxWithBorder2.setPosition(30, 93, 237, 138);
    boxWithBorder2.setColor(touchgfx::Color::getColorFromRGB(77, 94, 125));
    boxWithBorder2.setBorderColor(touchgfx::Color::getColorFromRGB(12, 27, 55));
    boxWithBorder2.setBorderSize(5);
    add(boxWithBorder2);

    textArea2.setXY(41, 101);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_UU5B));
    add(textArea2);

    textArea3.setXY(41, 162);
    textArea3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea3.setLinespacing(0);
    textArea3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_U3B6));
    add(textArea3);

    nextGame.setBoxWithBorderPosition(0, 0, 57, 142);
    nextGame.setBorderSize(0);
    nextGame.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(12, 27, 55), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    nextGame.setIconBitmaps(Bitmap(BITMAP_ICON_THEME_IMAGES_HARDWARE_KEYBOARD_ARROW_RIGHT_50_50_FFFFFF_SVG_ID), Bitmap(BITMAP_ICON_THEME_IMAGES_HARDWARE_KEYBOARD_ARROW_RIGHT_50_50_000000_SVG_ID));
    nextGame.setIconXY(0, 46);
    nextGame.setAction(flexButtonCallback);
    nextGame.setPosition(589, 175, 57, 142);
    add(nextGame);
}

CreditsViewBase::~CreditsViewBase()
{

}

void CreditsViewBase::setupScreen()
{

}

void CreditsViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &nextGame)
    {
        //rightGame
        //When nextGame clicked change screen to MenuMorpion
        //Go to MenuMorpion with screen transition towards East
        application().gotoMenuMorpionScreenSlideTransitionEast();
    }
}
