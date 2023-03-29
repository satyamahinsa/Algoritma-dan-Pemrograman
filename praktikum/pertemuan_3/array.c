#include <stdio.h>

int main() {
  // int data[5] = {10, 20, 30, 40, 50};

  // // menampilkan value pada index tertentu
  // printf("Data pada index ke 3 = %d", data[3]);
  // printf("\n\n");

  // // menampilkan seluruh value pada array
  // for(int i = 0; i < sizeof(data)/4; i++) {
  //   printf("Data pada index ke %d = %d\n", i, data[i]);
  // }
  // printf("\n\n");

  // // mengubah value
  // int nilai[5] = {70, 65, 80, 95, 90};

  // for(int i = 0; i < sizeof(nilai)/4; i++) {
  //   printf("Nilai pada index ke %d: %d\n", i, nilai[i]);
  // }

  // nilai[1] = 75;
  // nilai[3] = 90;

  // printf("\nNew Value:\n");

  // for(int i = 0; i < sizeof(nilai)/4; i++) {
  //   printf("Nilai pada index ke %d: %d\n", i, nilai[i]);
  // }

  int nilai[5];

  for(int i = 0; i < sizeof(nilai)/4; i++) {
    printf("Masukkan nilai pada index ke %d: ", i);
    scanf("%d", &nilai[i]);
  }

  for(int i = 0; i < sizeof(nilai)/4; i++) {
    printf("Nilai pada index ke %d: %d\n", i, nilai[i]);
  }

  return 0;
}