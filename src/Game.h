
#ifndef _FLORACIDEGAME_GAME_H_
#define _FLORACIDEGAME_GAME_H_

#include <iostream>
#include <SFML/Graphics.hpp>

class Game
{
private:
    sf::RenderWindow& window;

    sf::Texture texture_test;

public:
    Game(sf::RenderWindow& window);
    bool init();

    void update(float dt);
    void render();

    // NOTE: Learn SFML 3.0 event handling before doing input stuff
    /* void keyinput();
    void mouseinput(); */
};

#endif // _FLORACIDEGAME_GAME_H_