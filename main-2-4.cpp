#include <iostream>

extern int sum_min_max(int integers[], int length);

int main() {
  int array[5] = {1, 5, 3, 6, 2};
  int sum = sum_min_max(array, 5);

  std::cout << sum << std::endl; // expecting sum as 1+6 = 7;

  return 0;
}