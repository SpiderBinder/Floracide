
#include "GameObject.h"

GameObject::GameObject(
    sf::FloatRect object_collider)
{

}

GameObject::GameObject(
    sf::Texture& object_texture, 
    sf::FloatRect object_collider)
{
    sprite = std::make_unique<sf::Sprite>(object_texture);
}


const sf::Sprite& GameObject::getSprite()
{
    return *sprite;
}

const sf::FloatRect& GameObject::getCollider()
{
    return collider;
}