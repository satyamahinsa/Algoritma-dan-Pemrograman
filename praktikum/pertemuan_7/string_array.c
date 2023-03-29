#include <stdio.h>
#define ROW 5
#define COL 10

int main()
{
  char nama[ROW][COL] = {"Sana", "Jihyo", "Mina", "Momo", "Tzuyu"};

  // menggunakan pointer
  char (*ptr)[COL] = nama;

  printf("Nama:\n");
  for (int i = 0; i < 5; i++)
  {
    printf("%i. %s = %p\n", i+1, *ptr++, ptr + i);
  }

  return 0;
}