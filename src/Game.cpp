
#include "Game.h"


Game::Game(sf::RenderWindow& game_window)
    : window(game_window)
{
    
}


bool Game::init()
{
    bool success = true;

    if (!m_tileset1.loadFromFile("../../Content/TestStuff/TestTileset.png"))
    {
        std::cout << "\'TestTileset.png\' failed to load" << std::endl;
        success = false;
    }

    m_level_current = std::make_unique<Level>(m_tileset1);

    return success;
}


void Game::update(float dt)
{
    m_level_current->update(dt);

    return;
}

void Game::render()
{
    m_level_current->render(window);

    return;
}