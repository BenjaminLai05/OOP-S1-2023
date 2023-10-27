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
    Game() : gridWidth(0), gridHeight(0) {
        srand(static_cast<unsigned int>(time(nullptr))); // Seed for random number generation
    }

    void initGame(int numCharacters, int numTraps, int width, int height);
    void gameLoop(int maxIterations, double trapActivationDistance);
    std::vector<Cell*>& getGrid();

    ~Game();
};

#endif

// Game.cpp
#include "Game.h"

void Game::initGame(int numCharacters, int numTraps, int width, int height) {
    this->gridWidth = width;
    this->gridHeight = height;

    for (auto cell : grid) {
        delete cell;
    }
    grid.clear();

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

void Game::gameLoop(int maxIterations, double trapActivationDistance) {
    for (int iteration = 0; iteration < maxIterations; ++iteration) {
        for (Cell* cell : grid) {
            Character* character = dynamic_cast<Character*>(cell);
            if (character) {
                character->move(1, 0);
                int x, y;
                std::tie(x, y) = character->getPos();
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
                        int charX, charY, trapX, trapY;
                        std::tie(charX, charY) = character->getPos();
                        std::tie(trapX, trapY) = trap->getPos();
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

std::vector<Cell*>& Game::getGrid() {
    return grid;
}

Game::~Game() {
    for (auto cell : grid) {
        delete cell;
    }
}
