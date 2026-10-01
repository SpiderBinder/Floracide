
#ifndef _FLORACIDEGAME_GAME_H_
#define _FLORACIDEGAME_GAME_H_

#include <SFML/Graphics.hpp>
#include <iostream>
#include <memory>

#include "Entities/Player.h"

class Game
{
private:
    sf::RenderWindow& window;

    sf::Texture texture_test;
    std::unique_ptr<Player> player_test;

public:
    Game(sf::RenderWindow& window);
    bool init();

    void update(float dt);
    void render();

    
};

#endif // _FLORACIDEGAME_GAME_H_