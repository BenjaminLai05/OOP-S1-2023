#ifndef CELL_H
#define CELL_H

#include <tuple>

class Cell {
protected:
    std::tuple<int, int> position;
    char type;

public:
    virtual ~Cell() = default;

    Cell(int x, int y, char type) : position(x, y), type(type) {}

    std::tuple<int, int> getPos() const {
        return position;
    }

    char getType() const {
        return type;
    }

    void setPos(int x, int y) {
        position = std::make_tuple(x, y);
    }

    void setType(char newType) {
        type = newType;
    }
};

#endif
