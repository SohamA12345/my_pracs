int binary_to_int(int binary_digits[], int number_of_digits) {
  int decimal_number = 0;
  int multiple_number = 0;

  for (int i = 0; i < number_of_digits; i++) {
    multiple_number = binary_digits[number_of_digits -1 - i];

    for (int j = 0; j < i; j++) {
      multiple_number *= 2;
    }

    decimal_number += multiple_number;
  }

  return decimal_number;
}