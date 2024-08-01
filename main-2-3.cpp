#include <iostream>

extern int sum_if_palindrome(int integers[], int length);

int main() {
  int array[5] = {1, 2, 55, 5, 1};
  int sum = sum_if_palindrome(array, 5);

  std::cout << sum << std::endl; // expecting 0.

  return 0;
}