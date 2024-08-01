#include <iostream>

extern int is_identity(int array[10][10]);

int main() {
  int array[10][10] = {{1, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 1, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 1, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 1, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 1, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 1, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 1, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1}};
  bool identity = is_identity(array);

  std::cout << std::boolalpha << identity << std::endl; // expecting true.

  int array2[10][10] = {{1, 1}};
  bool identity2 = is_identity(array2);

  std::cout << identity2 << std::endl; // expecting true.

  return 0;
}