#include <iostream>

struct Rectangle{
  int length;
  int width;
}r1, r2, r3; // define 3 variables that is accessible to all functions

// the upper r1, r2, r3 is equivalent to
struct Rectangle r1, r2, r3; // with upper r1, r2, r3 removed

int main(){
  // declaration
  struct Rectangle r;

  // declaration and initialization
  struct Rectangle r = {2,4};

  // modify the value
  r.length = 15;
  r.width = 20;

  // create a Rectangle array
  struct Rectangle r_list[10];
  r_list[4].length = 1;
  r_list[9].width = 20;

  return 0;
}