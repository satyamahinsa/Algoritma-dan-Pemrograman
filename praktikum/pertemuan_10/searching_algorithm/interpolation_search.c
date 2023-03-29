#include <stdio.h>

int main() {
  // INTERPOLATION SEARCH => improvement over binary search, best used for "uniformly" distributed data
  // "guesses" where a value might be base on calculated probe results
  // if probe is incorrect, search area is narrowed, and a new probe is calculated
  // average case: O(log(log(n)))
  // worst case: O(n) [values increase exponentially]

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int num;
  printf("What's number do you want? (1-9): ");
  scanf("%d", &num);

  int low = 0, high = (sizeof(arr) / sizeof(int)) - 1;

  while(num >= arr[low] && num < arr[high] && low <= high) {
    int probe = low + (high - low) * (num - arr[low]) / (arr[high] - arr[low]);
    printf("Probe: %d\n", probe);

    if(num == arr[probe]) {
      printf("Number %d at index: %d", num, probe);
      break;
    } else if(num > arr[probe]) {
      low = probe + 1;
    } else {
      high = probe - 1;
    }
  }

  return 0;
} 