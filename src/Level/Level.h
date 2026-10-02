
#ifndef _FLORACIDEGAME_LEVEL_H_
#define _FLORACIDEGAME_LEVEL_H_

#include <SFML/Graphics.hpp>
#include <memory>

#include "Room.h"

// TODO: Change level tile rendering to use vertex arrays or otherwise optimise rendering

class Level
{
private:
    // Level tile rendering objects
    sf::Texture& tileset;
    std::unique_ptr<sf::Sprite> tile_sprite = nullptr;



public:
    Level(sf::Texture& level_tileset);
};

#endif // _FLORACIDEGAME_LEVEL_H_