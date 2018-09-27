#ifndef EXITW_H_INCLUDED
#define EXITW_H_INCLUDED
#include <SFML/Graphics.hpp>
#include "startwindow.h"
start_win start;
using namespace sf;
using namespace std;

void Exit(int life)
{
    RenderWindow window(VideoMode (1200,600),"Game Over");
    Sprite gameover;
    gobject score;
    Texture GO;
    //Time
    Time t;
        GO.loadFromFile("images/gameover.png");
        gameover.setTexture(GO);
        gameover.setPosition(300,150);
        //gameover .scale(0.5,0.5);

        // Writing Statement
        Text dead;
        Font fonte;
        fonte.loadFromFile("font/exit.ttf");
        dead.setFont(fonte);
        dead.setCharacterSize(60);
        dead.setColor(Color::Red);
        dead.setPosition(300,350);
        while (window.isOpen())
        {
            Event event;
            while (window.pollEvent(event))
            {
                if (event.type == Event::Closed || t.asSeconds()  >3.0f)
                window.close();
            }
            window.clear(Color(200,222,200,0));

            if (life<0)
            {
                string str = " WASTED ";
                dead.setString(str);
                window.draw(dead);
            }
            else
            {
                string str = " TIME OVER ";
                dead.setString(str);
                window.draw(dead);
            }

            window.draw(gameover);
            window.display();
        }
}

void finish_win()
{
    RenderWindow win(VideoMode (1200,600),"You Win");
        Sprite winSprite;
        Texture winTexture;
        winTexture.loadFromFile("images/win.png");
        winSprite.setTexture(winTexture);
        winSprite.setPosition(0,0);
    while (win.isOpen())
        {
            Event event;
            while (win.pollEvent(event))
            {
                if (event.type == Event::Closed || Keyboard::isKeyPressed(Keyboard::Escape))
                {
                   win.close();
                   start.startWin();
                }

            }
            win.clear(Color(200,222,200,0));
            win.draw(winSprite);
            win.display();
        }
}
#endif // EXITW_H_INCLUDED
