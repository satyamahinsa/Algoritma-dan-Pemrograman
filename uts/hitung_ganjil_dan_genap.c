#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

  int banyak_angka, genap = 0, ganjil = 0;
  scanf("%d", &banyak_angka);

  int angka[banyak_angka];
  for(int i = 0; i < banyak_angka; i++) {
    scanf("%d", &angka[i]);
  }

  for(int i = 0; i < banyak_angka; i++) {
    if(angka[i] % 2 == 0) {
      genap++;
    } else if(angka[i] % 2 == 1){
      ganjil++;
    } else {
      continue;
    }
  }

  printf("Genap: %d\n", genap);
  printf("Ganjil: %d\n", ganjil);

  return 0;
}
