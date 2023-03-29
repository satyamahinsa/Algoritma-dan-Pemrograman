#include <stdio.h>

int main() {
  int choice;
  int num1, num2, result;

  printf("--- CALCULATOR ---\n");
  printf("1. ADDITION\n");
  printf("2. SUBTRACTION\n");
  printf("3. MULTIPLICATION\n");
  printf("4. DIVIDED\n");
  printf("5. MODULO\n");
  printf("Your Choice (1/2/3/4/5): ");
  scanf("%d", &choice);

  printf("Input first number: ");
  scanf("%d", &num1);
  printf("Input second number: ");
  scanf("%d", &num2);

  switch (choice) {
    case 1:
      result = num1 + num2;
      printf("Your result: %d + %d = %d", num1, num2, result);
      break;
    case 2:
      result = num1 - num2;
      printf("Your result: %d - %d = %d", num1, num2, result);
      break;
    case 3:
      result = num1 * num2;
      printf("Your result: %d x %d = %d", num1, num2, result);
      break;
    case 4:
      result = num1 / num2;
      printf("Your result: %d / %d = %d", num1, num2, result);
      break;
    case 5:
      result = num1 % num2;
      printf("Your result: %d modulo %d = %d", num1, num2, result);
      break;
    default:
      printf("Your choice is wrong!");
    }
  
  return 0;
}