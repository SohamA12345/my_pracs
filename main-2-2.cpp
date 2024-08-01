#include <iostream>

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
  int size = 4;
  int binary_num[4] = {0, 0, 0, 1};
  std::cout << binary_to_int(binary_num,size) << std::endl; // 1

  int size1 = 5;
  int binary_num1[5] = {1, 1, 1, 1, 1};
  std::cout << binary_to_int(binary_num1, size1) << std::endl; // 1+2+4+8+16 = 31

  return 0;
}