#include "Game.h"
/// Initialization functions

void Game::InitVariables()
{
	window = nullptr;
}

void Game::InitWindow()
{
	videoMode.height = 720;
	videoMode.width = 1080;
	window = new sf::RenderWindow(videoMode, "Hello World Game", sf::Style::Titlebar | sf::Style::Close);
}

/// Internal Functions

void Game::UpdatePollEvents()
{
	while (window->pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			window->close();
			break;
		case sf::Event::KeyPressed:
			if (event.key.code == sf::Keyboard::Escape)
			{
				window->close();
			}
			break;
		default:
			break;
		}
	}
}
/// Constructor and destructor

Game::Game()
{
	InitVariables();
	InitWindow();
}

Game::~Game()
{
	delete window;
}
/// Game Main Function

void Game::Update()
{
	UpdatePollEvents();
}

void Game::Render()
{
	window->clear(sf::Color(34, 34, 34));
	window->display();
}

/// Game Accessors

const bool Game::IsRunning() const
{
	return window->isOpen();
}
