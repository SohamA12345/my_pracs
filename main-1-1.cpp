#include "Asset.h"
#include <iostream>

using namespace std;

int main() {
  Asset a;
  Asset b(5, "Good Asset");

  cout << a.get_value() << " " << a.get_product_type() << endl;
  cout << b.get_value() << " " << b.get_product_type() << endl;
}