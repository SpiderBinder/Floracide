
#ifndef _FLORACIDEGAME_LEVEL_H_
#define _FLORACIDEGAME_LEVEL_H_

#include <SFML/Graphics.hpp>
#include <vector>
#include <memory>

#include "Room.h"

// TODO: Add entities and rooms
// TODO: Render rooms to game window
// TODO: Check for entity collisions with level geometry and correct position if needed
// TODO: Either offload or add camera/view management for level gameplay

// Handles interaction between entities and level geometry
class Level
{
private:
    // Level rendering objects
    sf::Texture& m_tileset; // Level tileset texture

    // Level objects
    std::vector<Room> m_rooms;

public:
    Level(sf::Texture& level_tileset);

    // Updates all level entities then checks for collision
    void update(float dt);
    // Renders level geometry and entities to given window
    void render(sf::RenderWindow& game_window);
};

#endif // _FLORACIDEGAME_LEVEL_H_