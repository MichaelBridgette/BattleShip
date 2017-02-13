#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

#include"Player.h"
#include"Enemy.h"
#include"Board.h"

class Game
{
public:
	Game();
	~Game();
	void run();
private:
	sf::RenderWindow window;
	bool isRunning = false;
	void initialize();
	void update();
	void draw();
	void unload();
	void switchTurn();
	
	int num;
	sf::Keyboard m_keyboard;
	Player m_player;
	Enemy m_ai;
	Board m_board;
};