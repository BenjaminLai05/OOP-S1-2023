#include <iostream>
using namespace std;

void count_digits(int array[4][4]) {
    int counts[10] = {0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            counts[array[i][j]]++;
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << i << ":" << counts[i] << ";";
    }
    cout << endl;
}

int main() {
    int matrix[4][4] = {{1, 0, 0, 0},
                        {0, 1, 0, 0},
                        {0, 0, 1, 0},
                        {0, 0, 0, 1}};
    count_digits(matrix);
    return 0;
}