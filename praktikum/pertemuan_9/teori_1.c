#include <stdio.h>

int main() {
  FILE *file;
  file = fopen("texts/output.txt", "w");
  fprintf(file, "%s", "Hello World!");

  fclose(file);
  return 0;
} 