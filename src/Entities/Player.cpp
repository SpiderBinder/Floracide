
#include "Player.h"


Player::Player(sf::Texture entity_spritesheet)
    : Entity(entity_spritesheet)
{
    collider = {{0.f, 0.f}, {16.f, 16.f}};
    speed = 100.f;
}


void Player::update(float dt)
{
    velocity = {0.f, 0.f};
    if (input_manager.checkKeyRight()) { velocity.x += speed; }
    if (input_manager.checkKeyLeft()) { velocity.x -= speed; }
    if (input_manager.checkKeyDown()) { velocity.y += speed; }
    if (input_manager.checkKeyUp()) { velocity.y -= speed; }


    // Add velocity to current position
    collider.position += (velocity * dt);

    sprite->setPosition(collider.position);

    return;
}