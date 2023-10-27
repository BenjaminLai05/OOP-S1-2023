#include <iostream> 
#include <ctime>
#include <tuple>

#include "Cell.h"
#include "Effect.h"
#include "Utils.h"

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    auto position1 = Utils::generateRandomPos(10, 10);
    auto position2 = Utils::generateRandomPos(10, 10);

    return 0;
}
