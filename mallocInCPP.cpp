#include<stdlib.h>


int main(){
  // C: allocate memory in heap
  int* p = (int*)malloc(sizeof(int) * 5);

  // CPP: allocate memory in heap
  int* p = new int[5];
}