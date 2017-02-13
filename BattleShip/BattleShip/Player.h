#pragma once
/*
Name:Michael Bridgette
ID:c00205948
Date: 13/02/2017
*/
#include<SFML\Graphics.hpp>
#include"Ship.h"
#include<iostream>
class Player {

public:
	Player();
	~Player();
	void update(sf::Keyboard &keyboard);
	void render(sf::RenderWindow &window);
	sf::Vector2f selectTarget();
	void moveRight();
	void moveLeft();
	void moveDown();
	void moveUp();

private:
	bool m_isTurn;
	sf::Vector2f m_pos;
	Ship *m_ships[10];
};
