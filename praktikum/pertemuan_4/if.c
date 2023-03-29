#include <stdio.h>

int main() {
  int score;
  printf("Input your score: ");
  scanf("%d", &score);

  if (score > 80) {
    printf("You got A!\n");
  }

  printf("End Program");
  
  return 0;
}