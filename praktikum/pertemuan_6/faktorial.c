#include <stdio.h> 

int faktorial1(int angka) {
  if(angka <= 1) {
    return 1;
  } else {
    return angka * faktorial1(angka - 1);
  }
}

int faktorial2(int angka) {
  int result = 1;
  for(int i = angka; i > 0; i--) {
    result *= i;
  }
  return result;
}

int main() {
  int input;
  printf("Masukkan angka: ");
  scanf("%d", &input);

  printf("Faktorial dari %d! = ", input);
  for(int i = input; i > 0; i--) {
    if(i == 1) {
      printf("%d = ", i);
    } else {
      printf("%d x ", i);
    }
  }

  printf("%d", faktorial1(input));

  return 0;
}