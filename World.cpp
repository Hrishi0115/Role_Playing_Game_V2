#include "World.h"
#include <iostream>

World::World() : map(10,10) {} // defining a constructor the 'World' class - within the constructor, there's a member initializer list: map(10,10) - 
// initialises a member variable of the 'World' class called "map"

void World::simulateDayNightCycle() {
	// Toggle day/night
	isDay = !isDay;
	std::cout << (isDay ? "It's now day." : "It's now night.") << std::endl;
}

void World::displayWorld() {
	map.display();
}

