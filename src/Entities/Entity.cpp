
#include "Entity.h"


Entity::Entity(
    sf::Texture& entity_spritesheet, 
    sf::FloatRect entity_collider)

    : GameObject(entity_spritesheet, entity_collider)
{

}




const sf::Vector2f& Entity::getVelocity()
{
    return velocity;
}

const float& Entity::getSpeed()
{
    return speed;
}


void Entity::setPosition(const sf::Vector2f& entity_position)
{
    collider.position = entity_position;

    return;
}