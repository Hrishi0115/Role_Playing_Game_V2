#pragma once

#ifndef WORLD_H // starts an include guard - This line starts an include guard. It's a preprocessor directive that ensures the contents of the
// header file are only included once in a translation unit. If WORLD_H is not defined, the preprocessor includes the contents of the file 
// until it finds #endif // WORLD_H. If WORLD_H is defined, the contents are skipped. I.e. 
// When code tries to include a header file, the preprocessor (tool in C++ that handles directives - commands beginning with
// a hash symbol/#. It  runs before the actual compilation of the code - of one its tasks is to process header files)
// checks if (the header file) it's already been included before. If not, it lets the code in and remembers in, else it keeps it out - basically ensure the code in the header file
// is only added to the program once.

#define WORLD_H

#include "Map.h"

class World {
public:
	World();
	void simulateDayNightCycle();
	void displayWorld();
private:
	Map map; // declares a member variable 'map' of type 'Map'
	bool isDay = true;
};

#endif 