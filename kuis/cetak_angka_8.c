#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int input;
  scanf("%d", &input);

  for(int i = 0; i < input * 2 - 1; i++) {
    if(i == 0 || i == input - 1 || i == (input * 2) - 2) {
      printf(" ");
      for(int j = 1; j < input - 1; j++) {
        printf("*");
      }
      printf("\n");
    } else {
      printf("*");
      for(int j = 1; j < input - 1; j++) {
        printf(" ");
      }
      printf("*\n");
    }
  }

  return 0;
}