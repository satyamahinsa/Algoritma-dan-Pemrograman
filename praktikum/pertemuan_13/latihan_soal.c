#include <stdio.h>

void quick_sort(int array[], int start, int end) {
  if(end <= start) {
    return;
  } else {
    int pivot = array[end];
    int i = start - 1;

    for(int j = start; j <= end; j++) {
      if(array[j] < pivot) {
        i++;
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
    i++;
    int temp = array[i];
    array[i] = array[end];
    array[end] = temp;

    quick_sort(array, start, i - 1);
    quick_sort(array, i + 1, end);
  }
}

int linear_search(int array[], int size) {
  int max_num = array[0];
  for(int i = 0; i < size; i++) {
    if(max_num < array[i]) {
      max_num = array[i];
    }
  }
  return max_num;
}

// int binary_search(int array[], int start, int end) {
//   int max_num = array[0];
//   while(start <= end) {
//     int mid = (start + end) / 2;
//     if (max_num == array[mid]) return max_num;
//     if (cari > array[mid]) left = mid + 1;
//     else right = mid - 1;
//   }
// }


int main() {
  int n;
  scanf("%d", &n);

  int array[n];
  for(int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }
  
  int max_num1 = linear_search(array, n);
  quick_sort(array, 0, n);
  int max_num2 = array[n - 1];

  printf("%d\n", max_num1);
  printf("%d\n", max_num2);
  return 0;
} 