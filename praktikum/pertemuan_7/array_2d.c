#include <stdio.h>

int main() {
  int arr1[5][5] = { { 0, 1, 2, 3, 4 },
		{ 2, 3, 4, 5, 6 },
		{ 4, 5, 6, 7, 8 },
		{ 5, 4, 3, 2, 6 },
		{ 2, 5, 4, 3, 1 } };

  int* arr2[5][5];

  /* Menginisialisasi setiap elemen dari pointer array
  arr2 dengan alamat memori array arr1 */
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      arr2[i][j] = &arr1[i][j];
    }
  }

  // Menampilkan array menggunakan array pointer
  printf("The values are\n");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%d ", *arr2[i][j]);
    }
  printf("\n");
  }

  return 0;
}