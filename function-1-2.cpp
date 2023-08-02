#include <iostream>

bool is_identity(int array[10][10]) {
    bool status = true;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i != j && array[i][j] != 0) {
                status = false;
                break;
            }
            if (i == j && array[i][j] != 1) {
                status = false;
                break;
            }
        }
    if (!status) {
        break;
    }
    }
    return status;
}