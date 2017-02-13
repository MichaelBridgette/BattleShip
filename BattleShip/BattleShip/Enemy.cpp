/*
Name:Michael Bridgette
ID:c00205948
Date: 13/02/2017
*/
#include"Enemy.h"

Enemy::Enemy()
{
	m_pos = sf::Vector2f(0, 0);
	m_isTurn = false;

	for (int i = 0; i < 10; i++)
	{
		m_ships[i] = new Ship();
	}

}

Enemy::~Enemy()
{
	
}

void Enemy::setDifficulty()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		m_difficulty = Difficulty::easy;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
	{
		m_difficulty = Difficulty::medium;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
	{
		m_difficulty = Difficulty::hard;
	}
}

void Enemy::update()
{

}

void Enemy::render(sf::RenderWindow &window)
{
	window.display();
}

void Enemy::selectTarget(sf::Vector2f pos)
{
	m_pos = pos;
}