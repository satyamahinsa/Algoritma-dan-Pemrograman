#include <stdio.h>

void ascendingOrder(int size, int *nums) {
  for(int i = 0; i < size - 1; i++) {
    int temp;
    for(int j = 0; j < size - 1 - i; j++) {
      if(nums[j] > nums[j + 1]) {
        temp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = temp;
      }
    }
  }
}

void descendingOrder(int size, int *nums) {
  for(int i = 0; i < size - 1; i++) {
    int temp;
    for(int j = 0; j < size - 1 - i; j++) {
      if(nums[j] < nums[j + 1]) {
        temp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = temp;
      }
    }
  }
}

void output(int size, int *nums){
  for(int i = 0; i < size; i++){
    printf("%d ", nums[i]);
  }
}

int main() {
  int size;
  printf("Masukkan berapa angka yang dimasukkan: ");
  scanf("%d", &size);

  int nums[size];
  printf("Masukkan angka: \n");
  for(int i = 0; i < size; i++) {
    scanf("%d", &nums[i]);
  }

  ascendingOrder(size, nums);
  printf("\nAscending = ");
  output(size, nums);
  descendingOrder(size, nums);
  printf("\nDescending = ");
  output(size, nums);
  return 0;
}   