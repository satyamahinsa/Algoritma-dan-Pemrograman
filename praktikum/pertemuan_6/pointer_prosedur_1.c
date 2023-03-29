#include <stdio.h>

int main() {
  int a = 2;
  int b = 6;
  int* c = a;
  printf("%d", a);
  printf("\n%d", &a);
  printf("\n%d", b);
  printf("\n%d", &b);
  printf("\n%d", c);
  printf("\n%d", &c);

  return 0;
}