#pragma once
#include<SFML\Graphics.hpp>
#include<iostream>
class Ship {

public:
	Ship();
	void setPos(sf::Vector2f newPos);
	void update();
	void render(sf::RenderWindow &window);
	bool checkAlive();

private:
	sf::Vector2f m_pos;
	bool m_isAlive;

};
