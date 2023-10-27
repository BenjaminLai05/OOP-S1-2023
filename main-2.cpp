#include <iostream>
#include "Trap.h"
#include "Character.h"

int main() {

    Trap trap(5, 5);
    Character character(2, 3);

    std::cout << "Trap active: " << trap.isActive() << std::endl;
    std::cout << "Character position: ";
    auto [charX, charY] = character.getPos();
    std::cout << "(" << charX << ", " << charY << ")" << std::endl;

    character.move(3, 2);
    std::cout << "Character new position: ";
    auto [newCharX, newCharY] = character.getPos();
    std::cout << "(" << newCharX << ", " << newCharY << ")" << std::endl;

    trap.apply(character);
    std::cout << "Trap applied, active: " << trap.isActive() << std::endl;

    std::cout << "Character type: " << character.getType() << std::endl;

    return 0;
}
