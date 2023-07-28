int sum_two_arrays(int array[], int secondarray[], int n) {

    int arrayOne = 0;
    int arrayTwo = 0;
    int totalSum;

    if (n < 1) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
       arrayOne = array[i] + arrayOne;
    }

    for (int i = 0; i < n; i++) {
       arrayTwo = secondarray[i] + arrayTwo;
    }

    totalSum = arrayOne + arrayTwo;

    return totalSum;
}