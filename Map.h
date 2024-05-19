#ifndef MAP_H
#define MAP_H

#include <vector>

class Map {
public:
    Map(int width, int height);
    void display();

private:
    std::vector<std::vector<char>> grid;
};

#endif