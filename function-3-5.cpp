double sum_even(double array[], int n) {
  double sum = 0;
  int i = 0;

  while (i % 2 == 0 && i < n)
  {
    sum  += array[i];
    i += 2;
  }

  return sum;
}