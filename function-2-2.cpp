int max_element(int array[], int n) {
  int max = 0;

  if (n >= 1) {
    max = array[0];
  }

  for (int i = 1; i < n; i++) {
    if (max < array[i]) {
      max = array[i];
    }
  }

  return max;
}