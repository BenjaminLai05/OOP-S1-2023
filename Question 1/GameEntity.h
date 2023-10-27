#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include <tuple>

class GameEntity {
private:
    std::tuple<int, int> position;
    char type;

public:
    // Constructor
    GameEntity(int x, int y, char entityType) : position(x, y), type(entityType) {}

    // Member functions
    std::tuple<int, int> getPos() const {
        return position;
    }

    char getType() const {
        return type;
    }
};

#endif
