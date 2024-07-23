bool is_ascending(int array[], int n) {
  for (int i = 0; i < n - 1; i++) {
    if (n > 0 && array[i] < array[i+1]) {;} 
    else {return false;}
  }

  return true;
}