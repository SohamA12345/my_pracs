#include <iostream>

using namespace std;

extern double arrayMin(double* array, int size);

int main() {
  double array1[] = {1.0, 2.2, 3.3, 4.4};
  int min = arrayMin(array1, 4);

  cout << min << endl;
}