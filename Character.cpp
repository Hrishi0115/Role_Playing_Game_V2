// Purpose: this source file will define the functions declared in the header

// defining the character class
// Character attributes:
//1. Name, Health, Stamina, Immunity - hunger, thirst, warmth, ill?

// character methods: display stats, take damange, recover

// basic implementation

#include "Character.h" // includes the 'Character.h' header file - contains the declaration of the 'Character' class - allows 'Character.cpp' to know about the structure of the
// 'Character' class and its member functions and variables

Character::Character(const std::string& name, int health, int stamina, float immunity)
    : name(name), health(health), stamina(stamina), immunity(immunity) {}

// defines a constructor for the 'Character' class

void Character::displayStats() const {
    std::cout << "Character: " << name
              << "\nHealth: " << health
              << "\nStamina: " << stamina
              << "\n Immunity: " << immunity << std::endl;
}

void Character::takeDamage(int amount) {
    health -= amount;
    if (health < 0) health = 0;
    std::cout << name << " takes " << amount << " damage." << std::endl;
    displayStats();
}

void Character::recover() {
    // Simple recovery logic, can be expanded based on game mechanics
    health += 10;
    stamina += 5;
    if (health > 100) health = 100;
    if (stamina > 100) stamina = 100;
    std::cout << name << " recovers, boosting health and stamina." << std::endl;
    displayStats();
}