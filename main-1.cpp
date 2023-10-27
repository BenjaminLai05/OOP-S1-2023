#include <iostream>
#include "GameEntity.h"
#include "Utils.h"

// g++ main-1.cpp -o main -std=c++17

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate some random positions
    auto position1 = Utils::generateRandomPos(10, 10);
    auto position2 = Utils::generateRandomPos(10, 10);

    // Print the positions
    std::cout << "Position 1: (" << std::get<0>(position1) << ", " << std::get<1>(position1) << ")\n";
    std::cout << "Position 2: (" << std::get<0>(position2) << ", " << std::get<1>(position2) << ")\n";

    // Calculate and print the distance
    std::cout << "Distance between positions: " << Utils::calculateDistance(position1, position2) << std::endl;

    return 0;
}
