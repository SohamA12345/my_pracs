#include <iostream>

void two_five_nine(int array[], int n) {
  int no_twos = 0;
  int no_fives = 0;
  int no_nines = 0;

  for (int i = 0; i < n; i++) {
    switch (array[i])
    {
    case 2:
      no_twos++;
      break;
    
    case 5:
      no_fives++;
      break;

    case 9:
      no_nines++;
      break;

    default:
      break;
    }
  }

  std::cout << "2:" << no_twos << ";5:" << no_fives << ";9:" << no_nines << ";" << std::endl;

  return;
}