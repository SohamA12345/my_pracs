#include <iostream>

void count_digits(int array[4][4]) {
  int digits_array[10] = {0};

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      int digit = array[i][j];
      digits_array[digit]++;
    }
  }

  std::cout << "0:" << digits_array[0] << ";1:" << digits_array[1] << ";2:" << digits_array[2] << ";3:" << digits_array[3] << ";4:" << digits_array[4] << ";5:" << digits_array[5] << ";6:" << digits_array[6] << ";7:" << digits_array[7] << ";8:" << digits_array[8] << ";9:" << digits_array[9] << std::endl;

  return;
}