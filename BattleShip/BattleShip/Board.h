#pragma once

#include<SFML\Graphics.hpp>
#include"Grid.h"
#include<iostream>
class Board {

public:
	Board();
	~Board();
	void update();
	void render(sf::RenderWindow &window);

private:
	Grid grid;
};