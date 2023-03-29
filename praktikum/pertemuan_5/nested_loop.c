#include <stdio.h>

int main() {
  for(int a = 0; a < 10; a++) {
    for(int b = 0; b < 10; b++) {
      printf("Ini adalah angka: %d\n", b);
    } 
    printf("Ini adalah angka: %d\n", a);
  }

  return 0;
}