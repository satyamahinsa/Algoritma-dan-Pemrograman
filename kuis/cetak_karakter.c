#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  char A[1001], B[6];
  int i;

  scanf("%s", A);
  scanf("%d", &i);
  scanf("%s", B);

  if(strcmp(B, "true") == 0) {
    for(int x = i; x >= 0; x--) {
      printf("%c", A[x]);
    }
  } else {
    if (i > 100) {
      for(int x = i - 1; x < strlen(A); x++) {
        printf("%c", A[x]);
      }
    } else {
      for(int x = i; x < strlen(A); x++) {
        printf("%c", A[x]);
      }
    }
  }

  return 0;
}