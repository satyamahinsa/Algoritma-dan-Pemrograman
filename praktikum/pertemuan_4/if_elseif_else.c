#include <stdio.h>

int main() {
  int score;
  printf("Input your score: ");
  scanf("%d", &score);

  if (score > 80 && score <= 100) {
    printf("You got A!\n");
  } else if (score > 70 && score <= 80) {
    printf("You got B!\n");
  } else if (score > 60 && score <= 70) {
    printf("You got C!\n");
  } else if (score > 50 && score <= 60) {
    printf("You got D!\n");
  } else if (score >= 0 && score <= 50) {
    printf("You got E!\n");
  } else {
    printf("Your input is invalid!");
  }

  printf("End Program");
  
  return 0;
}