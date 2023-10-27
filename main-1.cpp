#include <iostream> 
#include <ctime>
#include <tuple>

/*#include "Cell.h"
#include "Effect.h"
#include "Utils.h"

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    auto position1 = Utils::generateRandomPos(10, 10);
    auto position2 = Utils::generateRandomPos(10, 10);

    Utils::calculateDistance(position1, position2);

    return 0;
}*/

#include <iostream>
#include "Cell.h"
#include "Utils.h"

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    auto position1 = Utils::generateRandomPos(10, 10);
    auto position2 = Utils::generateRandomPos(10, 10);

    std::cout << "Position 1: (" << std::get<0>(position1) << ", " << std::get<1>(position1) << ")\n";
    std::cout << "Position 2: (" << std::get<0>(position2) << ", " << std::get<1>(position2) << ")\n";

    std::cout << "Distance between positions: " << Utils::calculateDistance(position1, position2) << std::endl;

    return 0;
}

