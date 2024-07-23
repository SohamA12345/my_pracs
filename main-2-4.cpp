#include <iostream>

extern bool is_ascending(int array[], int n);

int main(void) {
  int array1[6] = {1, 2, 3, 4, 5, 6};

  std::cout << is_ascending(array1, 6) << std::endl;

  int array2[0];

  std::cout << is_ascending(array2, 0) << std::endl;
}