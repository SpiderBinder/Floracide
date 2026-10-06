
#ifndef _FLORACIDEGAME_TILEMAP_H_
#define _FLORACIDEGAME_TILEMAP_H_

#include <SFML/Graphics.hpp>

// TODO: Change to use 'sf::PrimitiveType::TriangleStrip' to cut down on vertices?

// Used to draw a square grid of varying texture positions at once (e.g. for room rendering)
class TileMap : public sf::Drawable, public sf::Transformable
{
private:
    sf::VertexArray m_vertices;
    sf::Texture& m_tileset;

public:
    TileMap(sf::Texture& tileset, sf::Vector2i map_size, sf::Vector2i tile_size, int* tiles);
    
private:
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};

#endif // _FLORACIDEGAME_TILEMAP_H_