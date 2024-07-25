#include <iostream>

extern double weighted_average(int array[], int n);

int main(void) {
  int array1[6] = {1,2,1,4,1,3};
  double weighted_average1 = weighted_average(array1, 6);

  std::cout << std::fixed << weighted_average1 << std::endl; // Expecting 3

  return 0;
}