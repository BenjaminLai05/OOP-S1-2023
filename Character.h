#ifndef CHARACTER_H
#define CHARACTER_H

#include "Cell.h"

class Character : public Cell {
public:
    Character(int x, int y) : Cell(x, y, 'C') {}

    void move(int dx, int dy) {
        int newX = std::get<0>(getPos()) + dx;
        int newY = std::get<1>(getPos()) + dy;
        setPos(newX, newY);
    }
};

#endif
