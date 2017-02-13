#include "Game.h"



Game::Game() : window(sf::VideoMode(800, 600), "SFML")
{
	m_player = Player();
	m_ai = Enemy();
	m_board = Board();

}

Game::~Game(){

	

}

void Game::run()
{

	initialize();

	sf::Event event;

	while (isRunning){

		

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				isRunning = false;
			}
		}
		update();
		draw();
	}

}

void Game::initialize()
{
	isRunning = true;

	
}

void Game::update()
{
	m_player.update(m_keyboard);
	m_ai.update();
	m_board.update();
}

void Game::draw()
{
	
	window.display();
	m_player.render(window);
	m_ai.render(window);
}

void Game::unload()
{
	std::cout << "Cleaning up" << std::endl;
}

void Game::switchTurn()
{

}