#include <stdio.h>
#include <ctype.h>
#define ROW 5
#define COL 10

int main()
{
  char nama[ROW][COL] = {"Sana", "Jihyo", "Mina", "Momo", "Tzuyu"};

  // menggunakan pointer
  char (*ptr)[COL] = nama;
  char absensi[ROW];

  for (int i = 0; i < 5; i++) {
    printf("%i. %s (H/A) : ", i+1, *ptr++);
    scanf(" %c", &absensi[i]);
    absensi[i] = toupper(absensi[i]);
  }

  ptr = nama; // mengubah alamat memori ptr dari index ke-4 ke index ke-0

  for(int i = 0; i < 5; i++) {
    if(absensi[i] == 'A' || absensi[i] == 'a') {
      printf("%i. %s : Alpha\n", i+1, *ptr++);
    } else if(absensi[i] == 'H' || absensi[i] == 'h') {
      printf("%i. %s : Hadir\n", i+1, *ptr++);
    }
  }

  return 0;
}