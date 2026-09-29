
#ifndef _FLORACIDEGAME_PLAYER_H_
#define _FLORACIDEGAME_PLAYER_H_

#include "Entity.h"
#include "../Managers/InputManager.h"

class Player : public Entity
{
private:

public:
    Player(sf::Texture entity_spritesheet);

    void update(float dt);

    void setVelocity(const sf::Vector2f& new_velocity);
};

#endif // _FLORACIDEGAME_PLAYER_H_