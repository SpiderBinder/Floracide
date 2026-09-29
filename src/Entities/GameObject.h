
#ifndef _FLORACIDEGAME_GAMEOBJECT_H_
#define _FLORACIDEGAME_GAMEOBJECT_H_

#include <SFML/Graphics.hpp>

class GameObject
{
protected:
    sf::Sprite* sprite = nullptr;

    sf::FloatRect collider;

public:
    GameObject();
    GameObject(sf::Texture& object_texture);
    ~GameObject();

    const sf::Sprite* getSprite();
    const sf::FloatRect& getCollider();
};

#endif // _FLORACIDEGAME_GAMEOBJECT_H_