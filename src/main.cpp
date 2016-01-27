#define SFML_SHARED

#include <StateManager.hpp>
#include <PlayState.hpp>
#include <SFML/Graphics.hpp>


int main()
{
	StateManager manager;

	manager.pushState(new PlayState(&manager));
	manager.gameLoop();

	return 0;
}
