#ifndef PLAYSTATE_HPP
#define PLAYSTATE_HPP

#include <SFML/Window.hpp>
#include <GameState.hpp>

class PlayState : public GameState
{
public:
	PlayState		(StateManager* manager);
	~PlayState		();

	void	processEvents		();
	void	update			(float delta);
	void	draw				(float delta);
	void	handlePlayerInput		();

private:


};

#endif // PLAYSTATE_HPP
