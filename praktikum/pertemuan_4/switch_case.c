#include <stdio.h>

int main() {
  char score;
  printf("Enter your score (A/B/C/D/E): ");
  scanf("%c", &score);

  switch(score) {
    case 'A':
      printf("Perfect!\n");
      break;
    case 'B':
      printf("Excellent!\n");
      break;
    case 'C': 
      printf("Good!\n");
      break;
    case 'D':
      printf("Nice!\n");
      break;
    case 'E': 
      printf("Not Enough!\n");
      break;
    default:
      printf("Your input is invalid!\n");
  }

  printf("End Program");
  
  return 0;
}