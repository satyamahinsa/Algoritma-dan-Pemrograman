#include <stdio.h>

void kelipatan(int num1, int num2, int num3) {
  int count = 0;
  for(int i = num1; i <= 100; i += num1) {
    if(i % num2 != 0 && i % num3 == 0) {
      printf("%d ", i);
      count++;
    }
  }
  printf("\nBanyak bilangan = %d\n", count);
}

int main() {
  kelipatan(4, 5, 3);
  kelipatan(7, 3, 5);
  kelipatan(8, 6, 4);

  return 0;
}