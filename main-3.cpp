#include "Game.h"

int main() {
    Game game;
    game.initGame(3, 2, 10, 10); // Initialize with some characters and traps
    game.gameLoop(100, 1.5); // Start the game loop with a maximum of 100 iterations
    return 0;
}
