#include <stdio.h>
#include <string.h>

int main() {
  char input[100], total_vokal = 0;
  scanf("%[^\n]%*c", &input);

  for(int i = 0; i < strlen(input); i++) {
    if(input[i] == 'a' || input[i] == 'i' || input[i] == 'u' || input[i] == 'e' || input[i] == 'o') {
      total_vokal++;
    }
  }

  printf("Total huruf vokal pada %s sejumlah %d huruf", input, total_vokal);
  return 0;
} 