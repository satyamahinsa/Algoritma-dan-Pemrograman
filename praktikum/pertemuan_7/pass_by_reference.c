#include <stdio.h>

// membuat prosedur dengan parameter berupa pointer
void tambah_5 (int *angka){
  *angka += 5;
}

int main() {
  int nilai = 90;

  printf("Nilai awal adalah %d", nilai);

  /* memanggil prosedur tambah_5 dengan argumen disertai simbol ampersand `&` yang
  digunakan untuk meneruskan alamat memori dari variabel nilai ke dalam prosedur tambah_5 
  */
  tambah_5(&nilai);
  printf("\nNilai setelah ditambah adalah %d",nilai);

  return 0;
}