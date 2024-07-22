#include <iostream>

extern int array_sum(int array[], int n);

int main(void) {
  int array1[5] = {1, 2, 3, 4, 5};
  int sum1 = array_sum(array1, 5);

  std::cout << sum1 << std::endl; // expecting 1+2+3+4+5 = 15

  int array2[0];
  int sum2 = array_sum(array2, 0);

  std::cout << sum2 << std::endl; // expecting 0

  return 0;
}