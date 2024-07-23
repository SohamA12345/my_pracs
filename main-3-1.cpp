#include <iostream>

extern bool is_fanarray(int array[], int n);

int main(void) {
  int array1[7] = {1, 2, 3, 4, 3, 2, 1};

  std::cout << std::boolalpha << is_fanarray(array1, 7) << std::endl; // Expecting true

  int array2[6] = {4, 8, 16, 16, 8, 4};

  std::cout << std::boolalpha << is_fanarray(array2, 6) << std::endl; // Expecting true

  int array3[5] = {1, 2, 1, 2, 1};

  std::cout << std::boolalpha << is_fanarray(array3, 5) << std::endl; // Expecting false

  int array4[5] = {1, 3, 5, 4, 2};

  std::cout << std::boolalpha << is_fanarray(array4, 5) << std::endl; // Expecting false

  return 0;
}