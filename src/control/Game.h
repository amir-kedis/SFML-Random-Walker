#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

#include "../game-objects/RandomWalker.h"

class Game
{
private:
	/// Data members
	sf::RenderWindow* window;
	sf::Event event;
	sf::VideoMode videoMode;

	// Game Objects
	RandomWalker randomWalker;

	/// Initialization functions
	void InitVariables();
	void InitWindow();

	/// Internal Functions
	void UpdatePollEvents();

public:
	/// Constructor and destructor
	Game();
	~Game();

	/// Game Main Function
	void Update();
	void Render();

	/// Game Accessors
	const bool IsRunning() const;
	sf::VideoMode GetVideoMode() const;
};

