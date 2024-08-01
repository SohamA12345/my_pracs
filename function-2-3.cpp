bool is_palindrome(int integers[], int length) {
  for (int i = 0; i < length/2; i++) {
    if (integers[i] != integers[length - 1 - i]) {
      return false;
    }
  }

  return true;
}

int sum_array_elements(int integers[], int length) {
  int sum = 0;

  for (int i = 0; i < length; i++) {
    sum += integers[i];
  }

  return sum;
}

int sum_if_palindrome(int integers[], int length) {
  int sum = 0;

  if(is_palindrome(integers, length)) {
    sum = sum_array_elements(integers, length);
  }

  return sum;
}