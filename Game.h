#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Cell.h"
#include "Character.h"
#include "Trap.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

class Game {
private:
    std::vector<Cell*> grid;
    int gridWidth, gridHeight;

public:
    Game() : gridWidth(0), gridHeight(0) {
        srand(static_cast<unsigned int>(time(nullptr))); 
    }

    std::vector<Cell*>& getGrid() {
        return grid;
    }

    void initGame(int numCharacters, int numTraps, int width, int height);

    void gameLoop(int maxIterations, double trapActivationDistance);


    ~Game();
};

#endif
