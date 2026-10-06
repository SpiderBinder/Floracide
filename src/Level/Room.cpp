
#include "Room.h"

// NOTE: Temporary inclusion for testing
#include <iostream>


Room::Room(sf::Texture& room_tileset)
    : m_position(0.f, 0.f), m_tilemap(room_tileset)
{
    // Filling out tile grid with empty tiles
    m_tiles.fill(0);

    // NOTE: Temporary for testing room functionality; remove later
    m_tiles[0] = 1;
    m_tiles[17] = 1;
    m_tiles[18] = 1;
    m_tiles[33] = 1;
    m_tiles[49] = 1;

    m_tilemap.loadMap({roomSize, roomSize}, {tileSize, tileSize}, m_tiles.data());
}


const TileMap& Room::getTileMap()
{
    return m_tilemap;
}


const sf::Vector2f& Room::getRoomPosition()
{
    return m_position;
}

void Room::setRoomPosition(const sf::Vector2f& new_position)
{
    m_position = new_position;

    return;
}


const std::vector<GameObject>& Room::getObjects()
{
    return m_gameobjects;
}

Room::Tile Room::getTile(int x, int y)
{
    if (x >= roomSize || x < 0 || y >= roomSize || y < 0)
    {
        return Room::Tile::EMPTY;
    }

    return static_cast<Room::Tile>(m_tiles[x + y * roomSize]);
}

// TODO: Implement Room::getNearestCollider
/* sf::FloatRect Room::getNearestCollider(sf::Vector2f local_position)
{
    sf::FloatRect collider = {{0, 0}, {0, 0}};



    return collider;
} */