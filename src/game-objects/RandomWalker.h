#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>


class RandomWalker
{
private:
	// Date Members
	sf::CircleShape shape;
	sf::Color colors[5] = {
		sf::Color(0, 241, 97),
		sf::Color(2, 201, 140),
		sf::Color(4, 148, 197),
		sf::Color(5, 118, 229),
		sf::Color(20, 159, 141),
	};

	int RandomColorChangeCounter;

	sf::Vector2f position;

	// Initialization functions
	void InitShape();

public:
	RandomWalker();
	~RandomWalker();

	// Functions
	void Update();
	void Render(sf::RenderWindow* window);

};

