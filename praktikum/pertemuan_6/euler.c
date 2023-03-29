#include <stdio.h>

double faktorial1(int angka) {
  if(angka <= 1) {
    return 1;
  } else {
    return angka * faktorial1(angka - 1);
  }
}

double euler(int angka) {
  double result = 0;
  for(int i = 0; i <= angka; i++) {
    result += 1.0/faktorial1(i);
  }
  return result;
}

int main() {
  int input;
  scanf("%d", &input);

  printf("%.48f", euler(input));

  return 0;
}