#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int length = n * 2 - 1;
    int num[length][length];

    for(int i = 0; i < n; i++) {
      for(int j = i; j < length - i; j++) {
        for (int k = i; k < length - i; k++) {
          num[j][k] = n - i;
        }
      }
    }

    // print
    for(int i = 0; i < length; i++) {
      for(int j = 0; j < length; j++) {
        printf("%d ", num[i][j]);
      }
      printf("\n");
    }
      
    return 0;
}