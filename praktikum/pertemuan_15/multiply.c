#include <stdio.h>

int multiply(int x, int n) {
  if(n == 1) {
    return x;
  } else {
    return x + multiply(x, n - 1);
  }
}

int main() {
  int num1, num2;
  scanf("%d %d", &num1, &num2);
  printf("%d", multiply(num1, num2));
  return 0;
} 