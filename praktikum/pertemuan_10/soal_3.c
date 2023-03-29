#include <stdio.h>

int main() {
  int arr[] = {6, 4, 8, 4, 1, 9, 3, 7, 2};
  int num;
  printf("Masukkan angka yang dicari (1-9): ");
  scanf("%d", &num);

  int i = 0, result = 0;
  while(i < sizeof(arr)/sizeof(int)) {
    if(arr[i] == num) {
      result = 1;
    }
    i++;
  }

  if(result == 0) {
    printf("Angka tidak ditemukan!");
  } else {
    printf("Angka %d berada pada urutan ke-: %d", num, i + 1);
  }

  return 0;
} 