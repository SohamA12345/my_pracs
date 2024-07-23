bool is_fanarray(int array[], int n) {
  for (int i = 0; i < n / 2; i++) {
    if(array[i] == array[n - 1 - i]  && array[i] <= array[i + 1]) {} else {return false;}
  }

  return true;
}