#include <stdio.h>

int power(int basis, int pangkat) {
  if(pangkat > 0) {
    return basis * power(basis, pangkat - 1);
  } else {
    return 1;
  }
}

int main() {
  int basis, pangkat;
  scanf("%d %d", &basis, &pangkat);
  printf("%d", power(basis, pangkat));

  return 0;
} 