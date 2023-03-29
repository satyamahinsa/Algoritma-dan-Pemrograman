#include <stdio.h>

int main() {
  char data_diri[4][100];
  FILE *file;
  file = fopen("texts/data_diri.txt", "w");

  for(int i = 0; i < 4; i++) {
    scanf("%[^\n]%*c", &data_diri[i]);
    fprintf(file, "%s\n", data_diri[i]);
  }
  fclose(file);

  file = fopen("texts/data_diri.txt", "r");
  char data_file[1000];
  for(int i = 0; i < 4; i++) {
    fgets(data_file, sizeof(data_file), file);
    printf("%s", data_file);
  }
  fclose(file);

  return 0;
} 