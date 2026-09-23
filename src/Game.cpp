
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

    return success;
}


void Game::update(float dt)
{


    return;
}

void Game::render()
{
    

    return;
}