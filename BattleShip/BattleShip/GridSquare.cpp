#include "GridSquare.h"

GridSquare::GridSquare(sf::Vector2f pos)
{
	m_position.x = pos.x * 32;

	m_position.y = pos.y*32;

}

void GridSquare::isActive()
{
	m_containsShip = true;
}

void GridSquare::setDeactive()
{
	m_containsShip = false;
}

sf::Vector2f GridSquare::getPos()
{
	return sf::Vector2f(m_position);
}
