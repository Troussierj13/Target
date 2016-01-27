#include <PlayState.hpp>

PlayState::PlayState(StateManager *manager)
{
	this->manager = manager;
}

PlayState::~PlayState()
{

}

void PlayState::processEvents()
{
	sf::Event event;

	while (manager->window.pollEvent(event))
	{
		switch (event.type)
		{
			case sf::Event::Closed:
				manager->window.close();
			break;

			case sf::Event::KeyPressed:

			break;

			default:

			break;
		}
	}
}

void PlayState::update(float delta)
{

}

void PlayState::draw(float delta)
{
	//this->manager->window.draw(...);
}

void PlayState::handlePlayerInput()
{

}
