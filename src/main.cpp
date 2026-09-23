
#include <iostream>
#include <SFML/Graphics.hpp>

#include "Game.h"

int main()
{
    std::cout << "Hello World!!" << std::endl;

    sf::RenderWindow window(sf::VideoMode({800, 600}), "FloracideTest");
    window.setFramerateLimit(60);
    window.setKeyRepeatEnabled(false);

    Game game(window);
    if (!game.init())
    {
        return -1;
    }

    sf::Clock clock;

    while (window.isOpen())
    {
        sf::Time time = clock.restart();
        float dt = time.asSeconds();

        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                { window.close(); }

            // TODO: Pass keyboard and mouse input events to Game class
        }

        game.update(dt);

        window.clear(sf::Color::Cyan);

        game.render();
        window.display();
    }
}