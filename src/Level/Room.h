
#ifndef _FLORACIDEGAME_ROOM_H_
#define _FLORACIDEGAME_ROOM_H_

#include <SFML/Graphics.hpp>
#include <array>
#include <vector>
#include <memory>

#include "TileMap.h"
#include "../Entities/GameObject.h"

// TODO: Add functionality to assign tile layout on 'Room' object creation
// TODO: Seperate tile collision type and visual type (different enums for each)

// Handles individual tiles and static GameObjects in a confined space
class Room
{
public:
    // Different tile types for collision checking and rendering
    enum Tile
    {
        EMPTY,
        WALL
    };

    static const int roomSize = 16; // Length and width of a room in tiles
    static const int tileSize = 16; // Length and width of a tile in pixels

private:
    // Position of the Room object in relation to wider level geometry
    sf::Vector2f m_position;

    // Room rendering objects
    TileMap m_tilemap;

    // Room geometry and objects
    std::array<int, tileSize * tileSize> m_tiles; // 2D array of tiles
    std::vector<GameObject> m_gameobjects; // List of stationary objects in room

public:
    Room(sf::Texture& room_tileset);

    // Returns owned tilemap
    const TileMap& getTileMap();

    // Returns the current global position of the room
    const sf::Vector2f& getRoomPosition();
    // Sets the global position of the room
    void setRoomPosition(const sf::Vector2f& new_position);

    // Returns the list of static GameObjects within the current Room object
    const std::vector<GameObject>& getObjects();
    // Returns the TileType of tile at local position 'x', 'y'
    Room::Tile getTile(int x, int y);
    // Returns the nearest tile or GameObject to a given position as its collider
    // sf::FloatRect getNearestCollider(sf::Vector2f local_position);

};

#endif // _FLORACIDEGAME_ROOM_H_