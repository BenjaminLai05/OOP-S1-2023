#ifndef GAME_H
#define GAME_H

#include <vector>
#include <cmath>
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
    void initGame(int numCharacters, int numTraps, int width, int height) {
    gridWidth = width;
    gridHeight = height;

    for (auto cell : grid) {
        delete cell;
    }
    grid.clear();

    for (int i = 0; i < numCharacters; ++i) {
        int x = rand() % width;
        int y = rand() % height;
        grid.push_back(new Character(x, y));
    }

    for (int i = 0; i < numTraps; ++i) {
        int x = rand() % width;
        int y = rand() % height;
        grid.push_back(new Trap(x, y));
    }
}

void gameLoop(int maxIterations, double trapActivationDistance) {
    for (int iteration = 0; iteration < maxIterations; ++iteration) {
        // Move characters
        for (Cell* cell : grid) {
            Character* character = dynamic_cast<Character*>(cell);
            if (character) {
                character->move(1, 0);
                auto [x, y] = character->getPos();
                if (x >= gridWidth || y >= gridHeight) {
                    std::cout << "Character has won the game!" << std::endl;
                    return;
                }
            }
        }

        for (Cell* cell : grid) {
            Character* character = dynamic_cast<Character*>(cell);
            if (character) {
                for (Cell* other : grid) {
                    Trap* trap = dynamic_cast<Trap*>(other);
                    if (trap && trap->isActive()) {
                        auto [charX, charY] = character->getPos();
                        auto [trapX, trapY] = trap->getPos();
                        double distance = std::sqrt(std::pow(charX - trapX, 2) + std::pow(charY - trapY, 2));
                        if (distance <= trapActivationDistance) {
                            trap->apply(*character);
                        }
                    }
                }
            }
        }
    }
}
};

#endif



