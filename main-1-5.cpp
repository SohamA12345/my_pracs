#include <iostream>

extern int count_evens(int number);

int main(void) {
  int number_of_evens1 = count_evens(0);
  int number_of_evens2 = count_evens(10);
  int number_of_evens3 = count_evens(100);

  std::cout << number_of_evens1 << std::endl; // expecting 0;
  std::cout << number_of_evens2 << std::endl; // expecting 5;
  std::cout << number_of_evens3 << std::endl; // expecting 50;

  return 0;
}