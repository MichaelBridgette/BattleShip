#include "Grid.h"

Grid::Grid()
{
	for (int i = 0; i < 20; i++)
	{
		m_gridSquares[i] = new GridSquare(sf::Vector2f(i, i));
	}
}

Grid::~Grid()
{
	
}

GridSquare Grid::getSelectedGridSquare(int index)
{
	return *m_gridSquares[index];
}
