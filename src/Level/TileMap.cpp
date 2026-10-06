
#include "TileMap.h"


TileMap::TileMap(sf::Texture& tileset, sf::Vector2i map_size, sf::Vector2i tile_size, int* tiles)
    : m_tileset(tileset)
{
    // Resize vertex array to map size
    m_vertices.setPrimitiveType(sf::PrimitiveType::Triangles);
    m_vertices.resize(map_size.x * map_size.y * 6);

    for (int i = 0; i < map_size.x; i++)
    {
        for (int j = 0; j < map_size.y; j++)
        {
            // Get tile type
            const int tilenum = tiles[i + j * map_size.x];
            // Get tile texture position
            int tx = tilenum % (tileset.getSize().x / tile_size.x);
            int ty = tilenum / (tileset.getSize().x / tile_size.x);

            // Get a pointer to the starting vertex of tile triangles
            sf::Vertex* triangles = &m_vertices[i + j * map_size.x];

            // Set position of vertices
            triangles[0].position = sf::Vector2f(i * tile_size.x, j * tile_size.x);
            triangles[1].position = sf::Vector2f(i * tile_size.x, (j + 1) * tile_size.x);
            triangles[2].position = sf::Vector2f((i + 1) * tile_size.x, j * tile_size.x);
            triangles[3].position = sf::Vector2f((i + 1) * tile_size.x, j * tile_size.x);
            triangles[4].position = sf::Vector2f(i * tile_size.x, (j + 1) * tile_size.x);
            triangles[5].position = sf::Vector2f((i + 1) * tile_size.x, (j + 1) * tile_size.x);

            // Set texture position
            triangles[0].texCoords = sf::Vector2f(tx * tile_size.x, ty * tile_size.y);
            triangles[1].texCoords = sf::Vector2f(tx * tile_size.x, (ty + 1) * tile_size.y);
            triangles[2].texCoords = sf::Vector2f((tx + 1) * tile_size.x, ty * tile_size.y);
            triangles[3].texCoords = sf::Vector2f((tx + 1) * tile_size.x, ty * tile_size.y);
            triangles[4].texCoords = sf::Vector2f(tx * tile_size.x, (ty + 1) * tile_size.y);
            triangles[5].texCoords = sf::Vector2f((tx + 1) * tile_size.x, (ty + 1) * tile_size.y);  
        }
    }
}


void TileMap::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    states.transform *= getTransform();

    states.texture = &m_tileset;

    target.draw(m_vertices, states);
}