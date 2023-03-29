#include <stdio.h>

int sequentialSearch(int num, int* arr) {
  
}

int main() {
  int arr[3][3] = {{3, 7, 2}, {9, 1, 5}, {6, 4, 8}};
  int num;
  printf("Masukkan angka yang dicari (1-9): ");
  scanf("%d", &num);

  // sequential search
  int row = 0, column = 0;
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      if(arr[i][j] == num) {
        row = i + 1;
        column = j + 1;
        break;
      }
    }
  }

  if(row > 0 && column > 0) {
    printf("Angka %d berada pada baris ke %d kolom ke %d.\n", num, row - 1, column - 1);
  } else {
    printf("Angka tidak ditemukan");
  }

  return 0;
} 