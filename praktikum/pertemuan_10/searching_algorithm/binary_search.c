#include <stdio.h>

int main() {
  // BINARY SEARCH => search algorithm that finds the position of a target value within a sorted array
  // half of the array is eliminated during each step
  // run complexity = O(log n)
  // advantages: large data sets

  int arr[] = {1, 4, 8, 12, 15, 28, 49, 51};
  int num = 29;

  int low = 0, high = (sizeof(arr) / sizeof(int)) - 1;

  while(low <= high) {
    int middle = (low + high) / 2;

    if(num == arr[middle]) {
      printf("Number %d at index: %d", num, middle);
      break;
    } else if(low == high) {
      printf("Number not found!");
      break;
    } else if(num > arr[middle]) {
      low = middle + 1;
    } else if(num < arr[middle]) {
      high = middle - 1;
    } 
  }

  if(low > high) {
    printf("Number not found!");
  }

  return 0;
} 
int arr[] = {1, 4, 8, 12, 15, 28, 49, 51};