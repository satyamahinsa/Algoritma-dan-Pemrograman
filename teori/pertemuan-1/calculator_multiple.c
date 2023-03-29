#include <stdio.h>

int main() {
  int choice, input_number;
  float num[10], result = 0;

  printf("--- CALCULATOR ---\n");
  printf("1. ADDITION\n");
  printf("2. SUBTRACTION\n");
  printf("3. MULTIPLICATION\n");
  printf("4. DIVIDED\n");
  printf("Your Choice (1/2/3/4): ");
  scanf("%d", &choice);

  printf("What number do you want: ");
  scanf("%d", &input_number);

  for (int i = 0; i < input_number; i++) {
    printf("Input your number: ");
    scanf("%f", &num[i]);
  }

  for (int i = 0; i < input_number; i++) {
    switch (choice) {
      case 1:
        result += num[i];
        break;
      case 2:
        result -= num[i];
        break;
      case 3:
        result *= num[i];
        break;
      case 4:
        result /= num[i];
        break;
      default:
        printf("Your choice is wrong!");
    }
  }

  printf("Your result = %0.1f", result);
  return 0;
}