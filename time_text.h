#ifndef TIME_TEXT_H_INCLUDED
#define TIME_TEXT_H_INCLUDED
#include <sstream>
#include <cstdlib>
#include <SFML/Graphics.hpp>
#include "player.h"
using namespace sf;
using namespace std;
player P;
 class written{
 private:
    Font font1,font;
 public:
    Text text1,text;
    Text timer,textL;
    written(){
        font1.loadFromFile("font/arial.ttf");
        timer.setFont(font1);
        timer.setCharacterSize(35);
        timer.setColor(Color::Yellow);
        timer.setOrigin((P.GetPos().x)-1113,(P.GetPos().y)-400);

        text1.setFont(font1);
        text1.setString("TIME: ");
        text1.setCharacterSize(35);
        text1.setColor(Color::Green);
        text1.setStyle(Text::Bold);
        //text1.setOrigin(900,5);
        text1.setOrigin((P.GetPos().x)-985,(P.GetPos().y)-400);

        text.setFont(font1);
        text.setString("LIVES : ");
        text.setCharacterSize(30);
        text.setColor(Color::Red);
        text.setStyle(Text::Bold);

        textL.setFont(font1);
        textL.setCharacterSize(30);
        textL.setColor(Color::Red);
        textL.setStyle(Text::Bold);
        //textL.setOrigin(125,0);
        textL.setOrigin((P.GetPos().x)-140,(P.GetPos().y)-400);

    }

    Text getTime(){
        return text1;
    }
    Text getLives(){
        return text;
    }
    /*Text getTimer(){
        return timer;
    }*/
 };


#endif // TIME_TEXT_H_INCLUDED
