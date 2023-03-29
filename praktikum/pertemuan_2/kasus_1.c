#include <stdio.h>

int main()
{
  // deklarasi variabel
  int hari_kerja, penumpang, rata_rata_penumpang, jam_kerja, jam, menit;

  printf("--- PROGRAM DRIVER GOJEK ---\n");
  // input hari kerja
  printf("Masukkan banyaknya hari kerja: ");
  scanf("%d", &hari_kerja);
  // input banyak penumpang
  printf("Masukkan banyaknya penumapang: ");
  scanf("%d", &penumpang);

  // perhitungan rata-rata penumpang
  rata_rata_penumpang = penumpang / hari_kerja;
  printf("Rata - rata penumpang dalam sehari sejumlah %d\n", rata_rata_penumpang);

  // asumsi setiap penumpang membutuhkan 37 menit
  jam_kerja = penumpang * 37;
  jam = jam_kerja / 60;
  menit = jam_kerja % 60;

  printf("Jam kerja yang telah dilakukan: \n");
  printf("%d jam\n", jam);
  printf("%d menit\n", menit);
  
  return 0;
}