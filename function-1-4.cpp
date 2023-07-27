int sum_two_arrays(int array[], int secondarray[], int n) {

    int combinedSumArray;

    if (n < 1) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        combinedSumArray = array[i] + secondarray[i];
    }

    return combinedSumArray;
}