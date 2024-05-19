#pragma once

// a header file servers as a declaration of the 'Character' class and its member functions and variables. It provides an interface for using the 'Character' class without revealing
// its implementation details

#ifndef CHARACTER_H
#define CHARACTER_H // these 'guards' ensure that the contents of the header file (Character.h) are included only once in each source file.

#include <string>
#include <iostream>

class Character {
private:
	std::string name;
	int health;
	int stamina;
	float immunity;
	// private members can only be accessed within the class itself

public: // public members can be accessed from outside the class
	Character(const std::string& name, int health, int stamina, float immunity); // constructor of the 'Character' class - 
	void displayStats() const;
	// initialises a 'Character' object with the provided values for name, health, stamina, and immunity
	// in C++, & represents a reference, i.e. name is declared as a refernence to a 'const std::string' - name acts as a alias for an existing 'std::string' object
	void takeDamage(int amount);
	void recover();
};

#endif
