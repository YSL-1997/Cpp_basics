#include <iostream>

using namespace std;

int main() {
  int a[5];
  a[0] = 1;
  a[4] = 2;
  cout << sizeof(a) << endl;
  cout << a[4] << endl;

  int A[] = {1, 2, 3, 4, 5, 6, 7};

  // the uninitialized values are 0, i.e. B[7] = ... = B[9] =0
  int B[10] = {1, 2, 3, 4, 5, 6, 7};

  // initialize an array with all the elements to be 0
  int C[10] = {0};

  // print an array
  for (int i = 0; i < 10; i++) {
    cout << B[i] << endl;
  }

  // using foreach loop to print an array
  // although only 7 elements are initialized, it prints all 10 elements in B
  for (int i : A) {
    cout << B[i] << endl;
  }

  // take input from the user - Can we do that?
  unsigned int n;
  cout << "Enter size of the array: ";
  cin >> n;
  int D[n] = {2, 3, 4};
  // NO. Because we cannot initialize a variable-sized array in C++ like this
  // However, we can do this in C.

  // the following will be allowed, i.e. create an array
  int D[n];

  // then we can assign values using indices
  D[1] = 1;
  D[5] = 20; // be careful for seg fault when n <= 5
  // what are the other values in array D?
  // garbage, can be any number, not necessarily 0
  return 0;
}