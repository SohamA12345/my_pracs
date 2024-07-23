#include <iostream>

extern bool is_ascending(int array[], int n);

int main(void) {
  int array1[6] = {1, 2, 3, 4, 5, 6};

  std::cout << std::boolalpha << is_ascending(array1, 6) << std::endl; // Expecting true

  int array2[0];

  std::cout << is_ascending(array2, 0) << std::endl; // Expecting false

  int array3[5] = {100, 2, 50, 50, 60};

  std::cout << is_ascending(array3, 5) << std::endl; // Expecting false
}