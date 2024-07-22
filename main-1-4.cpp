#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main(void) {
  int array1[2] = {1, 2};
  int secondarray1[2] = {3, 4};
  int sum1 = sum_two_arrays(array1, secondarray1, 2);

  std::cout << sum1 << std::endl; // expecting 1+2+3+4 = 10

  int array2[0];
  int secondarray2[0];
  int sum2 = sum_two_arrays(array2, secondarray2, 0);

  std::cout << sum2 << std::endl; // expecting 0

  return 0;
}