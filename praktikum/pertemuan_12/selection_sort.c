#include <stdio.h>

int main() {
  int angka[10] = {8,5,2,6,9,3,1,4,0,7};
  for(int i = 0; i < 10; i++) {
    int min = i;
    for(int j = i + 1; j < 10; j++) {
      if(angka[j] < angka[min]) {
        min = j;
      }
    }
    int temp = angka[i];
    angka[i] = angka[min];
    angka[min] = temp;
  }

  for(int i = 0; i < 10; i++) {
    printf("%d ", angka[i]);
  }
  return 0;
} 