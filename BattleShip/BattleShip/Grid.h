#pragma once

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