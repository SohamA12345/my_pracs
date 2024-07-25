double weighted_average(int array[], int n) {
  int w_i[n]; 
  double weight_average = 0;

  for (int i  = 0; i < n; i++) {
    w_i[i] = 0;

    for (int j = 0; j < n; j++) {
      if (array[i] == array[j]) {
        w_i[i]++;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    weight_average += ((double) (array[i]*w_i[i])/n);
  }

  return weight_average;
}