#ifndef GAME_H
#define GAME_H

#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iostream>
#include "Cell.h"
#include "Character.h"
#include "Trap.h"

class Game {
private:
    std::vector<Cell*> grid;
    int gridWidth, gridHeight;

public:
    // Default constructor
    Game() : gridWidth(0), gridHeight(0) {
        srand(static_cast<unsigned int>(time(nullptr))); // Seed for random number generation
    }

    // Initialize the game
    void initGame(int numCharacters, int numTraps, int width, int height) {
        this->gridWidth = width;
        this->gridHeight = height;

        // Clear existing grid
        for (auto cell : grid) {
            delete cell;
        }
        grid.clear();

        // Populate grid with characters and traps
        for (int i = 0; i < numCharacters + numTraps; ++i) {
            int x = rand() % width;
            int y = rand() % height;

            if (i < numCharacters) {
                grid.push_back(new Character(x, y));
            } else {
                grid.push_back(new Trap(x, y));
            }
        }
    }

    // Game loop
    void gameLoop(int maxIterations, double trapActivationDistance) {
        for (int iteration = 0; iteration < maxIterations; ++iteration) {
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

        std::cout << "Maximum number of iterations reached. Game over." << std::endl;
    }

    // Getter for the grid
    std::vector<Cell*>& getGrid() {
        return grid;
    }

    // Destructor to free memory
    ~Game() {
        for (auto cell : grid) {
            delete cell;
        }
    }
};

#endif
