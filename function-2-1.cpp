#include <string>
#include <iostream>

void print_binary_str(std::string decimal_number) {
  int decimal_no = std::stoi(decimal_number);
  std::string binary = "";

  while (decimal_no > 0) {
    std::string digit = std::to_string(decimal_no % 2);
    binary = digit + binary;
    decimal_no /= 2;
  }

  std::cout << binary << std::endl;
}