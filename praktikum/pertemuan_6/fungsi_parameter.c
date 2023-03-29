#include <stdio.h>

int sum(int a, int b) {
  return a + b;
}

int main() {
  int a, b;
  printf("Masukkan angka 1: ");
  scanf("%d", &a);
  printf("Masukkan angka 2: ");
  scanf("%d", &b);
  printf("%d", sum(a, b));

  return 0;
}