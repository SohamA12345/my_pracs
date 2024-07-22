#include <iostream>

extern double array_mean(int array[], int n);

int main(void) {
  int array1[5] = {1, 2, 3, 4, 5};
  double mean1 = array_mean(array1, 5);

  std::cout << std::fixed << mean1 << std::endl; // expecting 3.0

  int array2[0];
  double mean2 = array_mean(array2, 0);

  std::cout << mean2 << std::endl; // expecting 0.0

  return 0;
}