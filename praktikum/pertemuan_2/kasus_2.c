#include <stdio.h>
#define PHI 3.14

int main()
{
  int jari_jari, tinggi;
  double volume, luas_permukaan;

  printf("--- PROGRAM VOLUME & LUAS TABUNG ---\n");
  // input jari-jari tabung
  printf("Masukkan jari-jari tabung: ");
  scanf("%d", &jari_jari);
  // input tinggi tabung
  printf("Masukkan tinggi tabung: ");
  scanf("%d", &tinggi);

  // perhitungan volume dan luas permukaan tabung
  volume = PHI * jari_jari * jari_jari * tinggi;
  luas_permukaan = 2 * PHI * jari_jari * (jari_jari + tinggi);

  printf("Volume tabung adalah %.2lf\n", volume);
  printf("Luas permukaan tabung adalah %.2lf\n", luas_permukaan);

  return 0;
}