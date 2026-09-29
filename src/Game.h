
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

    
};

#endif // _FLORACIDEGAME_GAME_H_