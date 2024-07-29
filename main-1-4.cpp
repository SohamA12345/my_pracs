#include <iostream>

extern void print_scaled(int array[3][3],int scale);

int main() {
  int scale1 = 3;
  int threebythree1[3][3] = {{0,1,2},{3,4,5},{6,7,8}};
  print_scaled(threebythree1,scale1);

  int scale2 = 5;
  int threebythree2[3][3] = {{0,1,2},{3,4,5},{6,7,8}};
  print_scaled(threebythree2,scale2);

  return 0;
}