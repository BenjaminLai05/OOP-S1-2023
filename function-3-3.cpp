double weighted_average(int array[], int n) {
  double weightedAverage;

  for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = 0; j < n; j++) {
      if (array[i] == array[j]) {
        count++;
      }
    }
    weightedAverage += (double)array[i] * count / n;
  }

  return weightedAverage;
}