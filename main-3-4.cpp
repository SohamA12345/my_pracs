#include <iostream>

extern void print_pass_fail(char grade);

int main(void) {
  char grade = '0';

  std::cout << "Write a grade: ";
  std::cin >> grade;

  print_pass_fail(grade);
}