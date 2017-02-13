#pragma once
/*
Name:Michael Bridgette
ID:c00205948
Date: 13/02/2017
*/

#include"GridSquare.h"
#include<iostream>

class Grid {
public:
	Grid();
	~Grid();
	GridSquare getSelectedGridSquare(int index);
private:
	GridSquare *m_gridSquares[20];
};