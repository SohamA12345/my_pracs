#include <iostream>

extern int num_count(int array[], int n, int number);

int main(void) {
  int array1[5] = {1, 2, 3, 2, 1};
  int parameter1 = 2;
  int matches1 = num_count(array1, 5, parameter1);

  std::cout << matches1 << std::endl; //expecting 2

  int array2[0];
  int parameter2 = 0;
  int matches2 = num_count(array2, 0, parameter2);

  std::cout << matches2 << std::endl; //expecting 0

  return 0;
}