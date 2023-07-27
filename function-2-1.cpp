int min_element(int array[], int n) { 

    if (n < 1) {
        return 0;
    }
    int smallest_num = array[0];

    for (int i = 0; i < n; i++) {
        if (smallest_num > array[i]) {
            smallest_num = array[i];
        }
    }

    return smallest_num;
    

}