int array_max(int integers[], int length) {
  int max = integers[0];

  for (int i = 1; i < length; i++) {
    if (max < integers[i]) {
      max = integers[i];
    }
  }

  return max;
}

int array_min(int integers[], int length) {
  int min = integers[0];

  for (int i = 1; i < length; i++) {
    if (min > integers[i]) {
      min = integers[i];
    }
  }

  return min;
}

int sum_min_max(int integers[], int length) {
  int min = array_min(integers, length);
  int max = array_max(integers, length);

  return min + max;
}