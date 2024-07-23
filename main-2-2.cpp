#include <iostream>

extern int max_element(int array[], int n);

int main(void) {
  int array1[6] = {-1, 200, 50, 3, 2000, -1};

  std::cout << max_element(array1, 6) << std::endl; // Expecting 2000

  int array2[0];

  std::cout << max_element(array2, 0) << std::endl; // Expecting 0

  return 0;
}