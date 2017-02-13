#pragma once
/*
Name:Michael Bridgette
ID:c00205948
Date: 13/02/2017
*/
#include<SFML\Graphics.hpp>
#include"Ship.h"
#include<iostream>
enum Difficulty {
	easy,
	medium,
	hard
};

class Enemy
{
public:
	Enemy();
	~Enemy();
	void selectTarget(sf::Vector2f pos);
	void update();
	void render(sf::RenderWindow &window);
	void setDifficulty();
private:
	bool m_isTurn;
	Difficulty m_difficulty = Difficulty::medium;
	sf::Vector2f m_pos;
	Ship *m_ships[10];

	


};