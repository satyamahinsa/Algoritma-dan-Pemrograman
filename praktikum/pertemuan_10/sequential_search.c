#include <stdio.h>

int sequentialSearch(int num, int* arr, int arrLength) {
  for(int i = 0; i < arrLength; i++) {
    if(num == arr[i] && i != arrLength) return i;
  }
  return -1;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arrLength = sizeof(arr)/sizeof(int);
  int num;

  printf("Masukkan angka yang dicari: ");
  scanf("%d", &num);

  int resultIndex = sequentialSearch(num, arr, arrLength);
  if(resultIndex == -1) printf("Angka tidak ditemukan\n");
  else printf("Angka %d ada di index %d\n", num, resultIndex);

  return 0;
}
