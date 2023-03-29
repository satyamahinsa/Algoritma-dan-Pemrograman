#include <stdio.h>

int main() {
  char data_diri[4];
  FILE *file;
  file = fopen("texts/data_diri.txt", "w");

  while(fgets(data_diri, sizeof(data_diri), file)){
    printf("%s", data_diri);
  }

  return 0;
} 