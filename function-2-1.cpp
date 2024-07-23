int min_element(int array[], int n) {
  int min = 0;

  if (n >= 1) {
    min = array[0];
  }

  for (int i = 1; i < n; i++) {
    if (min > array[i]) {
      min = array[i];
    }
  }

  return min;
}