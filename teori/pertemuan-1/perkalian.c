#include <stdio.h>

int main() {
  int num1, num2, result;

  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);

  result = num1 * num2;
  printf("Your result: %d x %d = %d", num1, num2, result);

  return 0;
}