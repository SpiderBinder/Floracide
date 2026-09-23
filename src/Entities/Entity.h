
#ifndef _FLORACIDEGAME_ENTITY_H_
#define _FLORACIDEGAME_ENTITY_H_

#include <SFML/Graphics.hpp>

class Entity 
{
protected:
    sf::Texture& spritesheet;
    sf::Sprite entitysprite = sf::Sprite(spritesheet);

    sf::FloatRect collider;
    sf::Vector2f velocity;

public:

};

#endif // _FLORACIDEGAME_ENTITY_H_