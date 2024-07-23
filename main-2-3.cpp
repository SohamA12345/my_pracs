extern void two_five_nine(int array[], int n);

int main(void) {
  int array1[12] = {1, 1, 2, 2, 3, 3, 5, 5, 7, 7, 9, 9}; // Expecting 2:2;5:2;9:2;

  two_five_nine(array1, 12);

  int array2[0]; // Expecting 2:0;5:0;9:0;

  two_five_nine(array2, 0);

  return 0;
}