#pragma once

/*
Name:Michael Bridgette
ID:c00205948
Date: 13/02/2017
*/

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