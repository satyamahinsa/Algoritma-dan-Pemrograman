// To get the last digit of a number in base 10, use  as the modulo divisor.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int result = 0;
    if (n >= 10000 && n <= 99999) {
      for (int i = 0; i < 5; i++) {
        result += n % 10;
        n /= 10;
      }
    }
    printf("%d", result);
    return 0;
}