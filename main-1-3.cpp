extern void count_digits(int array[4][4]);

int main() {
  int array1[4][4] = {{1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
  count_digits(array1); // expect 16 ones

  int array2[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 0, 0, 0}, {0, 0, 0, 0}};;
  count_digits(array2); // expects 7 zeros and all digits once.

  return 0;
}