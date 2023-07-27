int max_element(int array[], int n) { 

    if (n < 1) {
        return 0;
    }
    int biggest_num = array[0];

    for (int i = 0; i < n; i++) {
        if (biggest_num < array[i]) {
            biggest_num = array[i];
        }
    }

    return biggest_num;
    

}