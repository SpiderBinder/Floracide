
#ifndef _FLORACIDEGAME_ENTITY_H_
#define _FLORACIDEGAME_ENTITY_H_

#include <SFML/Graphics.hpp>

#include "GameObject.h"

// Cannot be used by itself; it is meant to be inherited for classes with actual behaviour
class Entity : public GameObject
{
protected:
    float speed;
    sf::Vector2f velocity;

public:
    Entity(sf::Texture& entity_spritesheet);

    const float& getSpeed();
    const sf::Vector2f& getVelocity();

    void setPosition(const sf::Vector2f& entity_position);
};

#endif // _FLORACIDEGAME_ENTITY_H_