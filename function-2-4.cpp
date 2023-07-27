bool is_ascending(int array[], int n) {

    bool status = true;
    for (int i = 0; i < n; i++) {
    if (array[i] >= array[i+1])
    {
        status = false;
    }
  }
  return status;
}