
#include "Game.h"


Game::Game(sf::RenderWindow& game_window)
    : window(game_window)
{

}

bool Game::init()
{
    bool success = true;

    if (!texture_test.loadFromFile("../../Content/TestStuff/TestTexture.png"))
    {
        std::cout << "\'TestTexture.png\' failed to load" << std::endl;
    }
    player_test = std::make_unique<Player>(texture_test);
    player_test->setPosition({100.f, 100.f});

    return success;
}


void Game::update(float dt)
{
    player_test->update(dt);

    return;
}

void Game::render()
{
    window.draw(player_test->getSprite());

    return;
}