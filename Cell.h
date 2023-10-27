#ifndef CELL_H
#define CELL_H

#include <tuple>

class Cell {
private:
    std::tuple<int, int> position;
    char type;

public:
    
    Cell(int x, int y, char type) : position(x, y), type(type) {}
    
    std::tuple<int, int> getPos() const {
        return position;
    }

    char getType() const {
        return type;
    }

    void setPos(int x, int y) {
        
    }

    void setType(char type) {

    }
};

#endif
