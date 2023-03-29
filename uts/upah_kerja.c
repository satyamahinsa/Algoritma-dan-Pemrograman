#include <stdio.h>

int main() {
  int jam_lembur;
  scanf("%d", &jam_lembur);

  if(jam_lembur > 0 && jam_lembur < 12) {
    printf("Rp. 100.000");
  } else {
    printf("Rp. 300.000");
  }

  return 0;
} 