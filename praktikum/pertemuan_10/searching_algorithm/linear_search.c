#include <stdio.h>

int main() {
  // LINEAR SEARCH => iterate through a collection one element at a time
  // runtime complexity = O(n)
  // disadvantages: slow for large data sets
  // advantages: 
  // 1. fast for searches of small to medium data sets
  // 2. does not need to sorted 
  // 3. useful for data structures that do not have random access (linked list)

  int arr[] = {9, 1, 5, 4, 8, 2, 6, 7, 3};
  int num;
  printf("What's number do you want? (1-9): ");
  scanf("%d", &num);

  for(int i = 0; i < sizeof(arr); i++) {
    if(arr[i] == num) {
      printf("Number %d at index: %d", num, i);
      break;
    } else if(i == sizeof(arr) - 1 && arr[i] != num) {
      printf("Number not found!");
    }
  }

  return 0;
} 