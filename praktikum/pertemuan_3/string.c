#include <stdio.h>

int main() {
  char name[30];

  printf("Input your name: ");
  fgets(name, sizeof(name), stdin);

  printf("Name: %s", name); // opsi 1
  puts(name); // opsi 2
  
  return 0;
}