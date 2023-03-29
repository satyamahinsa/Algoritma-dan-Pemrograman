#include <stdio.h>

void luasPersegi(int* luas, int a, int b) {
  *luas = a * b;
  printf("\nLuas persegi panjang (luasPersegi): %d", *luas);
}

int main() {
  int luas, p, l;
  printf("Masukkan panjang: ");
  scanf("%d", &p);
  printf("Masukkan lebar: ");
  scanf("%d", &l);

  luasPersegi(&luas, p, l);
  printf("\nLuas persegi panjang (main): %d", luas);

  return 0;
}