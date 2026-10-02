
#include "Level.h"


Level::Level(sf::Texture& level_tileset)
    : tileset(level_tileset)
{
    tile_sprite = std::make_unique<sf::Sprite>(tileset);
}

