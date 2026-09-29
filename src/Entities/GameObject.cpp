
#include "GameObject.h"

GameObject::GameObject()
{

}

GameObject::GameObject(sf::Texture& object_texture)
{
    sprite = new sf::Sprite(object_texture);
}

GameObject::~GameObject()
{
    delete sprite;
}


const sf::Sprite* GameObject::getSprite()
{
    return sprite;
}

const sf::FloatRect& GameObject::getCollider()
{
    return collider;
}