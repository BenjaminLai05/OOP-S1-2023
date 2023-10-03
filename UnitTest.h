#include <iostream>
#include "Addition.h"

class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    void testAddition() {
        Addition addition;

        if (addition.add(1, 2) != 3) {
            std::cout << "Test 1 failed!" << std::endl;
        }

        // Test 2: Check negative numbers
        if (addition.add(-1, -2) != -3) {
            std::cout << "Test 2 failed!" << std::endl;
        }

        // Test 3: Check mixing positive and negative numbers
        if (addition.add(-5, 3) != -2) {
            std::cout << "Test 3 failed!" << std::endl;
        }

        // Test 4: Check adding zero
        if (addition.add(5, 0) != 5) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }
};