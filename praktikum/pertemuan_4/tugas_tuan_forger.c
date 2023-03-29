#include <stdio.h>

int main() {
  double uts, uas, pr, tubes;

  printf("Masukkan nilai UTS: ");
  scanf("%lf", &uts);
  printf("Masukkan nilai PR: ");
  scanf("%lf", &pr);
  printf("Masukkan nilai Tubes: ");
  scanf("%lf", &tubes);

  
  uas = (75 - ((uts * 0.35) + (pr * 0.1) + (tubes * 0.2))) / 0.35;

  // printf("Nilai UAS: %.2lf\n", uas);
  
  if (uas >= 0 && uas <= 100) {
    printf("Tuan Forger bisa mendapatkan index A\n");
    printf("Nilai UAS yang diperlukan adalah %.2lf\n", uas);
  } else {
    printf("Tuan Forger tidak memungkinkan mendapatkan index A\n");
  }
  
  return 0;
}