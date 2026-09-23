
#include <iostream>
#include <SFML/Graphics.hpp>

#include "Game.h"

int main()
{
    std::cout << "Hello World!!" << std::endl;

    sf::RenderWindow window(sf::VideoMode({800, 600}), "FloracideTest");

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                { window.close(); }
        }
    }
}