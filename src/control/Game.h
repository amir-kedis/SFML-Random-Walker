#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>


class Game
{
private:
	/// Data members
	sf::RenderWindow* window;
	sf::Event event;
	sf::VideoMode videoMode;

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

