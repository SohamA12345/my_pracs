#include <iostream>

using namespace std;

extern double* duplicateArray(double* array, int size);

int main() {
  double array1[] = {1.0, 2.2, 3.3, 4.4};
  double* array_dup = duplicateArray(array1, 4);

  for (int i = 0; i < 4; i++) {
    cout << array_dup[i] << endl;
  }

  return 0;
}