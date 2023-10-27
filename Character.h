#ifndef CHARACTER_H
#define CHARACTER_H

#include "Cell.h"

class Character : public Cell {
public:
    // Constructor
    Character(int x, int y) : Cell(x, y, 'C') {}

    // Move the character
    void move(int dx, int dy) {
        auto [x, y] = getPos();
        setPos(x + dx, y + dy);
    }
};

#endif
