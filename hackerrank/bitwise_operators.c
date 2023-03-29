// In this challenge, you will use logical bitwise operators.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int max_and = 0, max_or = 0, max_xor = 0;

  for (int i = 1; i <= k; i++) {
    for (int j = i + 1; j <= n; j++) {
      // (Bitwise AND operator &) The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is evaluated to 0. It is denoted by &.
      // check bitwise AND
      if ((i & j) > max_and) {
        if ((i & j) < k) {
          max_and = i & j;
        }
      }
      
      // (Bitwise OR operator |) The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. It is denoted by |.
      // check bitwise OR
      if ((i | j) > max_or) {
        if ((i | j) < k) {
          max_or = i | j;
        }
      }

      // (Bitwise XOR (exclusive OR) operator ^) The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. It is denoted by ^.
      // check bitwise XOR
      if ((i ^ j) > max_xor) {
        if ((i ^ j) < k) {
          max_xor = i ^ j;
        }
      }
    }
  }

  printf("%d\n", max_and);
  printf("%d\n", max_or);
  printf("%d\n", max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
