#include <stdio.h>
#include <string.h>

int main() {
  char string[300];
  scanf("%[^\n]*c", &string);

  for(char huruf = 'a'; huruf <= 'z'; huruf++) {
    int count = 0;
    for(int i = 0; i < strlen(string); i++) {
      if(string[i] == huruf) {
        count++;
      }
    }
    if(count == 0) {
      continue;
    } else {
      printf("huruf %c ada %d\n", huruf, count);
    }
  }

  return 0;
} 