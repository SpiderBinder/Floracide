
#ifndef _FLORACIDEGAME_GAME_H_
#define _FLORACIDEGAME_GAME_H_

#include <SFML/Graphics.hpp>
#include <iostream>
#include <memory>

#include "Level/Level.h"
// NOTE: Temporary inclusions while making project
#include "Entities/Player.h"
#include "Level/TileMap.h"

// TODO: Research methods to deal with consistently finding 'Content' file?
// TODO: Move file loading to seperate class to clean up Game.cpp

class Game
{
private:
    sf::RenderWindow& window;

    sf::Texture m_tileset1;
    std::unique_ptr<Level> m_level_current;

public:
    Game(sf::RenderWindow& window);
    
    bool init();

    void update(float dt);
    void render();

    
};

#endif // _FLORACIDEGAME_GAME_H_