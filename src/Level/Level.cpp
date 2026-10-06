
#include "Level.h"


Level::Level(sf::Texture& level_tileset)
    : m_tileset(level_tileset)
{
    // NOTE: Temporary for testing room functionality; remove later
    m_rooms.emplace_back(m_tileset);
}


void Level::update(float dt)
{


    return;
}

void Level::render(sf::RenderWindow& game_window)
{
    for (Room& room : m_rooms)
    {
        game_window.draw(room.getTileMap());
    }

    return;
}