int count_evens(int number) {
  int number_of_evens = 0;

  for (int i = 1; i < number + 1; i = i + 2) {
    number_of_evens++;
  }

  return number_of_evens;
}