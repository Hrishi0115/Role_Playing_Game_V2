#include "Map.h"
#include <iostream>

Map::Map(int width, int height) : grid(width, std::vector<char>(height, '.')) {}
// constructor definition for the Mapp class - initialises a Map object with a specified width and height
// the ': grid(width, std::vector<char>(height, '.')' is the member initializer list, used to initialise the member variable (variables created in a class) 'grid' with a 2D 
// vector of characters of size width by height with each element initialised to '.'

void Map::display() {
	// defines a member function 'display()' of the 'Map' class
	for (auto& row : grid) {
		// iterates over each element 'row' in the grid - auto keyword automatically deduces the type of 'row' from the elements of 'grid' and the & symbol indicates
		// that 'row' is a reference to each element, allowing modifications of the elements
		for (auto& col : row) {
			std::cout << col << "";
		}
		std::cout << std::endl;
	}
}


