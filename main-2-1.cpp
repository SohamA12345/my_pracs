#include <iostream>

extern int min_element(int array[], int n);

int main(void) {
  int array1[5] = {5, 200, -1, 4, 300};

  std::cout << min_element(array1, 5) << std::endl; // Expecting -1

  int array2[0];

  std::cout << min_element(array2, 0) << std::endl; // Expecting 0

  return 0;
}