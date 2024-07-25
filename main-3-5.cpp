#include <iostream>

extern double sum_even(double array[], int n);

int main(void) {
  double array[10] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
  int sum = sum_even(array, 10);

  std::cout << sum << std::endl; //Expecting 5.
}