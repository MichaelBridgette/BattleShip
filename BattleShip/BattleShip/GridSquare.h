#pragma once
#include<SFML\Graphics.hpp>
class GridSquare {
public:
	GridSquare(sf::Vector2f pos);
	void isActive();
	void setDeactive();
	sf::Vector2f getPos();

private:
	sf::Vector2f m_position;
	bool m_containsShip;
};