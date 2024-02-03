/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/morpion_2_screen/Morpion_2ViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Morpion_2ViewBase::Morpion_2ViewBase() :
    flexButtonCallback(this, &Morpion_2ViewBase::flexButtonCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 640, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    Background.setBitmap(touchgfx::Bitmap(BITMAP_DARK_THEME_IMAGES_BACKGROUNDS_800X480_ASPHALT_ID));
    Background.setPosition(0, 0, 640, 480);
    Background.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(Background);

    Grille_main.setXY(80, 134);
    add(Grille_main);

    Titre.setXY(244, 14);
    Titre.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Titre.setLinespacing(0);
    Titre.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CZXE));
    add(Titre);

    Quitter.setXY(519, 82);
    Quitter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Quitter.setLinespacing(0);
    Quitter.setTypedText(touchgfx::TypedText(T___SINGLEUSE_OAW0));
    add(Quitter);

    Recommencer.setXY(27, 82);
    Recommencer.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Recommencer.setLinespacing(0);
    Recommencer.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CEIK));
    add(Recommencer);

    Joueur_2.setXY(229, 62);
    Joueur_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Joueur_2.setLinespacing(0);
    Joueur_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_HD7Q));
    add(Joueur_2);

    Joueur_1.setXY(230, 62);
    Joueur_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Joueur_1.setLinespacing(0);
    Joueur_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_TNV6));
    add(Joueur_1);

    Quit.setBoxWithBorderPosition(0, 0, 96, 68);
    Quit.setBorderSize(5);
    Quit.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    Quit.setAction(flexButtonCallback);
    Quit.setPosition(506, 14, 96, 68);
    add(Quit);

    Restart.setBoxWithBorderPosition(0, 0, 96, 68);
    Restart.setBorderSize(5);
    Restart.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    Restart.setAction(flexButtonCallback);
    Restart.setPosition(50, 14, 96, 68);
    add(Restart);

    Button_2_2.setBoxWithBorderPosition(0, 0, 156, 106);
    Button_2_2.setBorderSize(0);
    Button_2_2.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    Button_2_2.setAlpha(0);
    Button_2_2.setAction(flexButtonCallback);
    Button_2_2.setPosition(404, 358, 156, 106);
    add(Button_2_2);

    Button_2_1.setBoxWithBorderPosition(0, 0, 156, 106);
    Button_2_1.setBorderSize(0);
    Button_2_1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    Button_2_1.setAlpha(0);
    Button_2_1.setAction(flexButtonCallback);
    Button_2_1.setPosition(242, 358, 156, 106);
    add(Button_2_1);

    Button_2_0.setBoxWithBorderPosition(0, 0, 156, 106);
    Button_2_0.setBorderSize(0);
    Button_2_0.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    Button_2_0.setAlpha(0);
    Button_2_0.setAction(flexButtonCallback);
    Button_2_0.setPosition(80, 358, 156, 106);
    add(Button_2_0);

    Button_1_2.setBoxWithBorderPosition(0, 0, 156, 106);
    Button_1_2.setBorderSize(0);
    Button_1_2.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    Button_1_2.setAlpha(0);
    Button_1_2.setAction(flexButtonCallback);
    Button_1_2.setPosition(404, 246, 156, 106);
    add(Button_1_2);

    Button_1_1.setBoxWithBorderPosition(0, 0, 156, 106);
    Button_1_1.setBorderSize(0);
    Button_1_1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    Button_1_1.setAlpha(0);
    Button_1_1.setAction(flexButtonCallback);
    Button_1_1.setPosition(241, 246, 156, 106);
    add(Button_1_1);

    Button_1_0.setBoxWithBorderPosition(0, 0, 156, 106);
    Button_1_0.setBorderSize(0);
    Button_1_0.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    Button_1_0.setAlpha(0);
    Button_1_0.setAction(flexButtonCallback);
    Button_1_0.setPosition(80, 245, 156, 106);
    add(Button_1_0);

    Button_0_2.setBoxWithBorderPosition(0, 0, 156, 106);
    Button_0_2.setBorderSize(0);
    Button_0_2.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    Button_0_2.setAlpha(0);
    Button_0_2.setAction(flexButtonCallback);
    Button_0_2.setPosition(404, 134, 156, 106);
    add(Button_0_2);

    Button_0_1.setBoxWithBorderPosition(0, 0, 156, 106);
    Button_0_1.setBorderSize(0);
    Button_0_1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    Button_0_1.setAlpha(0);
    Button_0_1.setAction(flexButtonCallback);
    Button_0_1.setPosition(241, 137, 156, 106);
    add(Button_0_1);

    Button_0_0.setBoxWithBorderPosition(0, 0, 156, 106);
    Button_0_0.setBorderSize(0);
    Button_0_0.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    Button_0_0.setAlpha(0);
    Button_0_0.setAction(flexButtonCallback);
    Button_0_0.setPosition(80, 134, 156, 106);
    add(Button_0_0);

    Croix_1.setXY(-156, 401);
    add(Croix_1);

    Cercle_1.setXY(640, 351);
    add(Cercle_1);

    Cercle_2.setXY(640, 245);
    add(Cercle_2);

    Croix_2.setXY(-156, 292);
    add(Croix_2);

    Cercle_3.setXY(640, 139);
    add(Cercle_3);

    Croix_3.setXY(-156, 186);
    add(Croix_3);

    Cercle_4.setXY(640, 33);
    add(Cercle_4);

    Croix_4.setXY(-156, 80);
    add(Croix_4);

    Croix_5.setXY(-156, -26);
    add(Croix_5);
}

Morpion_2ViewBase::~Morpion_2ViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void Morpion_2ViewBase::setupScreen()
{
    Grille_main.initialize();
    Croix_1.initialize();
    Cercle_1.initialize();
    Cercle_2.initialize();
    Croix_2.initialize();
    Cercle_3.initialize();
    Croix_3.initialize();
    Cercle_4.initialize();
    Croix_4.initialize();
    Croix_5.initialize();
}

void Morpion_2ViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &Restart)
    {
        //Restart_Game
        //When Restart clicked call virtual function
        //Call restart_button
        restart_button();
    }
    if (&src == &Quit)
    {
        //Quit_Game
        //When Quit clicked fade Quit
        //Set alpha to 255 on Quit
        Quit.setAlpha(255);
        Quit.invalidate();
        //QuitGame
        //When Quit clicked change screen to MainMenu
        //Go to MainMenu with screen transition towards North
        application().gotoMainMenuScreenSlideTransitionNorth();
    }
    if (&src == &Button_0_0)
    {
        //Button_0_0
        //When Button_0_0 clicked call virtual function
        //Call button_0_0
        button_0_0();
    }
    if (&src == &Button_0_1)
    {
        //Button_0_1
        //When Button_0_1 clicked call virtual function
        //Call button_0_1
        button_0_1();
    }
    if (&src == &Button_0_2)
    {
        //Button_0_2
        //When Button_0_2 clicked call virtual function
        //Call button_0_2
        button_0_2();
    }
    if (&src == &Button_1_0)
    {
        //Button_1_0
        //When Button_1_0 clicked call virtual function
        //Call button_1_0
        button_1_0();
    }
    if (&src == &Button_1_1)
    {
        //Button_1_1
        //When Button_1_1 clicked call virtual function
        //Call button_1_1
        button_1_1();
    }
    if (&src == &Button_1_2)
    {
        //Button_1_2
        //When Button_1_2 clicked call virtual function
        //Call button_1_2
        button_1_2();
    }
    if (&src == &Button_2_0)
    {
        //Button_2_0
        //When Button_2_0 clicked call virtual function
        //Call button_2_0
        button_2_0();
    }
    if (&src == &Button_2_1)
    {
        //Button_2_1
        //When Button_2_1 clicked call virtual function
        //Call button_2_1
        button_2_1();
    }
    if (&src == &Button_2_2)
    {
        //Button_2_2
        //When Button_2_2 clicked call virtual function
        //Call button_2_2
        button_2_2();
    }
}
