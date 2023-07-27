double array_mean(int array[], int n) {
    double sum = 0;

    if (n < 1) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    sum = sum / n;

    return sum;

}