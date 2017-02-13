#include"Ship.h"

Ship::Ship()
{
	m_isAlive = true;
	m_pos = sf::Vector2f(0, 0);
}

bool Ship::checkAlive()
{
	return m_isAlive;
}
void Ship::update()
{
	float num;
	std::cin >> num;
	setPos(sf::Vector2f(num, num));

}
void Ship::render(sf::RenderWindow &window)
{
	window.display();
}
void Ship::setPos(sf::Vector2f newPos)
{
	m_pos = newPos;
}
