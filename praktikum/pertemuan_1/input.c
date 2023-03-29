#include <stdio.h>

int main() {
  char firstname[30], lastname[30];
  printf("Your first name: ");
  scanf("%[^\n]s", &firstname);
  fflush(stdin);
  printf("Your last name: ");
  scanf("%[^\n]s", &lastname);
  printf("Your name is %s %s", firstname, lastname);
  return 0;
}