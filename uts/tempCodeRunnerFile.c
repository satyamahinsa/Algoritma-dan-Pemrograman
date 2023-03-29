#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

  int matrix[3][3], tidak_simetris = 0;
  
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      scanf("%d", &matrix[i][j]);
      if(matrix[i][j] < 0) {
        tidak_simetris++;
      }
    }
  }

  if(tidak_simetris > 0) {
    printf("Tidak Simetris");
  } else {
    printf("Simetris");
  }

  return 0;
}
