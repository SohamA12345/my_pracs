#include <iostream>

using namespace std;

extern void modifyArray(double* array, int size, double value);

int main() {
  double array1[] = {1.0, 2.2, 3.3, 4.4};
  modifyArray(array1, 4, 1);

  for (int i = 0; i < 4; i++) {
    cout << array1[i] << endl;
  }
}