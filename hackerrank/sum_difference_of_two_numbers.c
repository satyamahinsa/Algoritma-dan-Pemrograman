// The fundamental data types in c are int, float and char. Today, we're discussing int and float data types.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num1, num2;
    float num3, num4;
    
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &num3, &num4);
    
    // sum & difference integers
    printf("%d %d\n", num1+num2, num1-num2);
    // sum & difference float
    printf("%0.1f %0.1f", num3+num4, num3-num4);
    
    return 0;
}