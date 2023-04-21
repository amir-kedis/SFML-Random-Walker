#include "RandomWalker.h"

void RandomWalker::InitShape()
{
	shape.setRadius(3.f);
	shape.setFillColor(sf::Color(0, 241, 97));
}

RandomWalker::RandomWalker()
{
	position = sf::Vector2f(540.f, 330.f);
	InitShape();
	RandomColorChangeCounter = 0;
}

RandomWalker::~RandomWalker()
{
}

void RandomWalker::Update()
{
	int direction = rand() % 8;

	switch (direction)
	{
	case 0:
		position.x += 1.f;
		break;
	case 1:
		position.x -= 1.f;
		break;
	case 2:
		position.y += 1.f;
		break;
	case 3:
		position.y -= 1.f;
		break;
	case 4:
		position.x += 1.f;
		position.y += 1.f;
		break;
	case 5:
		position.x -= 1.f;
		position.y -= 1.f;
		break;
	case 6:
		position.x += 1.f;
		position.y -= 1.f;
		break;
	case 7:
		position.x -= 1.f;
		position.y += 1.f;
		break;
	}

	RandomColorChangeCounter++;

	if (RandomColorChangeCounter >= 100)
	{
		RandomColorChangeCounter = 0;
		shape.setFillColor(colors[rand() % 4]);
	}

	shape.setPosition(position);
}

void RandomWalker::Render(sf::RenderWindow* window)
{
	window->draw(shape);
}
