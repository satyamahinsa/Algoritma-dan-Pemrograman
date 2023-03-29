#include <stdio.h>
#include <stdlib.h>
#define PHI 3.14

int main()
{
  int r, luas;
  printf("--- PROGRAM LUAS LINGKARAN ---\n");
  printf("Masukkan jari-jari lingkaran: ");
  scanf("%d", &r);

  luas = PHI * r * r;
  printf("Luas lingkaran = %d", luas);

  return 0;
}