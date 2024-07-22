double array_mean(int array[], int n) {
  double mean = 0.0;

  if (n == 0) {
    return mean;
  }

  for (int i = 0; i < n; i++) {
    mean += (double) array[i]; // mean = array[i] + mean
  }

  return mean /= n;
}