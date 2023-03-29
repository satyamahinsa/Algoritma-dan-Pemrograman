#include <stdio.h>

int main() {
  int x = 2038;
  int *px = &x;

  printf("Alamat memori x: %p\n", &x);
  printf("Nilai x: %d\n\n", x);

  printf("Alamat memori pointer px: %p\n", &px);
  printf("Isi pointer px: %d\n\n", *px);

  x = 1991;
  printf("Alamat memori pointer px: %p\n", px);
  printf("Isi pointer px: %d\n\n", *px);

  *px = 2022;
  printf("Alamat memori x: %p\n", &x);
  printf("Nilai x: %d\n\n", x);

  return 0;
}