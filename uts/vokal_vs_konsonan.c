#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

  char input;
  scanf("%c", &input);
  input = toupper(input);

  if(input == 'A' || input == 'I' || input == 'U' || input == 'E' || input == 'O') {
    printf("vokal");
  } else if(input == 'B' || input == 'C' || input == 'D' || input == 'F' || input == 'G' || input == 'H' || input == 'J' || input == 'K' || input == 'L' || input == 'M' || input == 'N' || input == 'P' || input == 'Q' || input == 'R' || input == 'S' || input == 'T' || input == 'V' || input == 'W' || input == 'X' || input == 'Y' || input == 'Z') {
    printf("konsonan");
  } else {
    printf("bukan huruf");
  }
  
  return 0;
}
