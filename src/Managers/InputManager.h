
#ifndef _FLORACIDEGAME_INPUTMANAGER_H_
#define _FLORACIDEGAME_INPUTMANAGER_H_

#include <SFML/Graphics.hpp>

// NOTE: Will need updating for controller support
class InputManager
{
private:
    // Keybinds
    sf::Keyboard::Scan key_up;
    sf::Keyboard::Scan key_down;
    sf::Keyboard::Scan key_left;
    sf::Keyboard::Scan key_right;
    sf::Keyboard::Scan key_action1;
    sf::Keyboard::Scan key_action2;
    sf::Keyboard::Scan key_action3;


public:
    InputManager();

    bool checkKeyUp();
    bool checkKeyDown();
    bool checkKeyLeft();
    bool checkKeyRight();
    bool checkKeyAction1();
    bool checkKeyAction2();
    bool checkKeyAction3();

} static input_manager;

#endif // _FLORACIDEGAME_INPUTMANAGER_H_