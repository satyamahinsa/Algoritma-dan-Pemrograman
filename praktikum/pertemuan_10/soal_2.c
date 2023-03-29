#include <stdio.h>
#include <string.h>

int main() {
  char string[300];
  scanf("%[^\n]*c", &string);

  for(int i = 1; i < strlen(string); i++) {
    char temp = string[i];
    int j = i;
    while(string[j - 1] > temp && j > 0){
      string[j] = string[j - 1];
      j--;
    }
    string[j] = temp;
  }

  for(int i = 0; i < strlen(string); i++) {
    if(string[i] >= 65 && string[i] <= 90) {
      string[i] += 32;
    }
    
    if(string[i] < 97 || string[i] > 122) {
      continue;
    } else {
      int j = i;
      int count = 0;
      while(string[i] == string[j]) {
        count++;
        j++;
      }
      printf("huruf %c ada %d\n", string[i], count);
      i = j - 1;
    }
  }

  printf("%s", string);
  return 0;
} 