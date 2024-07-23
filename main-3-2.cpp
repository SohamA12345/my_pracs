#include <iostream>

extern int median_array(int array[], int n);

int main(void) {
  int array1[5] = {3, 5, 2, 1, 4};

  std::cout << median_array(array1, 5) << std::endl; // Expecting 3

  int array2[4] = {1, 2, 3, 4};

  std::cout << median_array(array2, 4) << std::endl; // Expecting 0

  int array3[11] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

  std::cout << median_array(array3, 11) << std::endl; // Expecting 5
}