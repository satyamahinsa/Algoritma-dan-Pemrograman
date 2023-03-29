#include <stdio.h>

void insertion_sort_1(int angka[], int panjang) {
  for(int i = 1; i < panjang; i++) {
    if(angka[i] < angka[i - 1]) {
      int j = i;
      while(angka[j] < angka[j - 1] && j > 0) {
        int temp = angka[j];
        angka[j] = angka[j - 1];
        angka[j - 1] = temp;
        j--;
      }
    }
  }
}

void insertion_sort_2(int angka[], int panjang) {
  for(int i = 1; i < panjang; i++) {
    if(angka[i] > angka[i - 1]) {
      int j = i;
      while(angka[j] > angka[j - 1] && j > 0) {
        int temp = angka[j];
        angka[j] = angka[j - 1];
        angka[j - 1] = temp;
        j--;
      }
    }
  }
}

void print_angka_1(int angka[], int panjang) {
  for(int i = 0; i < panjang; i++) {
    insertion_sort_1(angka, panjang);
    printf("%d ", angka[i]);
  }
}

void print_angka_2(int angka[], int panjang) {
  for(int i = 0; i < panjang/2; i++) {
    insertion_sort_1(angka, panjang);
    printf("%d ", angka[i]);
    insertion_sort_2(angka, panjang);
    printf("%d ", angka[i]);
  }

  if(panjang % 2 == 1) {
    printf("%d ", angka[panjang / 2]);
  }
  printf("\n");
}


int main() {
  int angka[] = {10, 5, 3, 1, 2, 9, 7, 4, 6, 8, 13, 11, 16, 14, 12, 15};
  int panjang = sizeof(angka) / sizeof(int);
  print_angka_1(angka, panjang);
  printf("\n");
  print_angka_2(angka, panjang);

  return 0;
} 