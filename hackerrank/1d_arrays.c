// a static array that has memory allocated at compile time.
// A dynamic array can be created in C, using the malloc (memory allocation) function and the memory is allocated on the heap at runtime.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
  int n, sum = 0;
  scanf("%d", &n);

  int *arr = (int*)malloc(n * sizeof(int)); // where arr points to the base address of the array

  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }

  free(arr); // When you have finished with the array, use free(arr) to deallocate the memory.
  printf("%d", sum);

  return 0;
}