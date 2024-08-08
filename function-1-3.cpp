double* duplicateArray(double* array, int size) {
  double* array_dup = new double[size];

  for (int i = 0; i < size; i++) {
    array_dup[i] = array[i];
  }

  return array_dup;
}