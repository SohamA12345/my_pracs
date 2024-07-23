#include <iostream>

extern bool is_descending(int array[], int n);

int main(void) {
  int array1[6] = {5, 4, 3, 2, 1, 0};

  std::cout << std::boolalpha << is_descending(array1, 6) << std::endl; // Expecting true

  int array2[0];

  std::cout << is_descending(array2, 0) << std::endl; // Expecting false

  int array3[5] = {100, 2, 50, 50, 60};

  std::cout << is_descending(array3, 5) << std::endl; // Expecting false
}