
#ifndef _FLORACIDEGAME_GAMEOBJECT_H_
#define _FLORACIDEGAME_GAMEOBJECT_H_

#include <SFML/Graphics.hpp>
#include <memory>

class GameObject
{
protected:
    std::unique_ptr<sf::Sprite> sprite;

    sf::FloatRect collider;

public:
    GameObject(sf::FloatRect object_collider = {{0.f, 0.f}, {0.f, 0.f}});
    GameObject(sf::Texture& object_texture, sf::FloatRect object_collider = {{0.f, 0.f}, {0.f, 0.f}});

    const sf::Sprite& getSprite();
    const sf::FloatRect& getCollider();
};

#endif // _FLORACIDEGAME_GAMEOBJECT_H_