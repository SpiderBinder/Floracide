
#include "InputManager.h"


InputManager::InputManager()
{
    // Setting default keybinds
    key_up = sf::Keyboard::Scan::Up;
    key_down = sf::Keyboard::Scan::Down;
    key_left = sf::Keyboard::Scan::Left;
    key_right = sf::Keyboard::Scan::Right;
    key_action1 = sf::Keyboard::Scan::Z;
    key_action2 = sf::Keyboard::Scan::X;
    key_action3 = sf::Keyboard::Scan::C;


}


bool InputManager::checkKeyUp()
{
    return sf::Keyboard::isKeyPressed(key_up);
}

bool InputManager::checkKeyDown()
{
    return sf::Keyboard::isKeyPressed(key_down);
}

bool InputManager::checkKeyLeft()
{
    return sf::Keyboard::isKeyPressed(key_left);
}

bool InputManager::checkKeyRight()
{
    return sf::Keyboard::isKeyPressed(key_right);
}

bool InputManager::checkKeyAction1()
{
    return sf::Keyboard::isKeyPressed(key_action1);
}

bool InputManager::checkKeyAction2()
{
    return sf::Keyboard::isKeyPressed(key_action2);
}

bool InputManager::checkKeyAction3()
{
    return sf::Keyboard::isKeyPressed(key_action3);
}