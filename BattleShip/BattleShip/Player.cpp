#include"Player.h"

Player::Player()
{
	m_pos = sf::Vector2f(0,0);
	m_isTurn = false;

	for (int i = 0; i < 10; i++)
	{
		m_ships[i] = new Ship();
	}
}

Player::~Player()
{
	
}

void Player::update(sf::Keyboard &keyboard)
{
	if (keyboard.isKeyPressed(keyboard.Up))
	{
		moveUp();
	}
	if (keyboard.isKeyPressed(keyboard.Down))
	{
		moveDown();
	}
	if (keyboard.isKeyPressed(keyboard.Right))
	{
		moveRight();
	}
	if (keyboard.isKeyPressed(keyboard.Left))
	{
		moveLeft();
	}
	if (keyboard.isKeyPressed(keyboard.Space))
	{
		selectTarget();
	}
}

void Player::moveDown()
{
	m_pos.y--;
}
void Player::moveUp()
{
	m_pos.y++;
}
void Player::moveRight()
{
	m_pos.x++;
}
void Player::moveLeft()
{
	m_pos.x--;
}

void Player::render(sf::RenderWindow &window)
{
	window.display();
}
sf::Vector2f Player::selectTarget()
{
	return m_pos;
}