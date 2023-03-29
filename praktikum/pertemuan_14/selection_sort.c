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
  for (int i = 1; i < panjang; i++) {
    int key = angka[i];
    int j = i - 1;
    while (j >= 0 && angka[j] > key) {
      angka[j + 1] = angka[j];
      j = j - 1;
    }
    angka[j + 1] = key;
  }
}

void print_angka(int angka[], int panjang) {
  for(int i = 0; i < panjang; i++) {
    printf("%d ", angka[i]);
  }
}

int main() {
  int angka[] = {6, 2, 1, 10, 5, 3, 7, 9, 4, 8};
  int panjang = sizeof(angka) / sizeof(int);
  // insertion_sort_1(angka, panjang);
  insertion_sort_2(angka, panjang);
  print_angka(angka, panjang);

  return 0;
} 