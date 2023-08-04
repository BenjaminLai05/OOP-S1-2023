#include <iostream>

int array_min(int array[], int length) {

    if (length <= 0) {
        return -1;
    }

    int min_element = array[0];

    for (int i = 1; i < length; i++) {
        if (array[i] < min_element) {
            min_element = array[i];
        }
    }

    return min_element;
}

int array_max(int array[], int length) {

    if (length <= 0) {
        return -1;
    }

    int max_element = array[0];

    for (int i = 1; i < length; i++) {
        if (array[i] > max_element) {
            max_element = array[i];
        }
    }
    return max_element;
}

int sum_min_max(int integers[], int length) {
    
    int min_val = array_min(integers, length);
    int max_val = array_max(integers, length);

    if (min_val == -1 || max_val == -1){
        return -1;
    }
    
    return min_val + max_val;
}


