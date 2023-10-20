#include <stdio.h>

// Learning Pointers

int main(){
  int a = 50;
  int* ptr = &a;
  printf("%d\n", a);
  printf("%p\n", ptr);
  return 0;
}