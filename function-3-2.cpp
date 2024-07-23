#include <iostream>

int median_array(int array[], int n) {
  int median = 0;

  if (n % 2 == 0) {
    return 0;
  }

  for (int j = 1; j < n; j++) {
    for (int i = 0; i < n - 1; i++) {
      if (array[i] > array[i+1]) {
        int max = array[i];
        int min = array[i+1];
        array[i] = min;
        array[i+1] = max;
      }
    }
  }

  return median = array[(n-1)/2];
}