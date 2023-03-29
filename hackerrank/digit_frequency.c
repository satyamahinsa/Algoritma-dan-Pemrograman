#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
  int count = 0;
  char s[1000], num[10] = "0123456789";
  scanf("%s", &s);

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < strlen(s); j++) {
      if (s[j] == num[i]) {
        count++;
      }
    }
    printf("%d ", count);
    count = 0;
  }

  return 0;
}
