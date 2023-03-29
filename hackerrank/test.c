#include <stdio.h>
#include <malloc.h>

int main() {
  int n, *ptr;
  printf("Enter a range of array: ");
  scanf("%d", &n);

  ptr = (int*) calloc(n, sizeof(int));

  for(int i = 0; i < n-1; i++) {
    printf("Masukkan angka pada index ke %d: ", i);
    scanf("%d", ptr+i);
    printf("Pada memori %d\n", ptr+i);
  }

  for(int i = 0; i < n; i++) {
    printf("Angka pada index ke %d: %d\n", i, *(ptr+i));
  }

  free(ptr);

  for(int i = 0; i < n; i++) {
    printf("Angka pada index ke %d: %d\n", i, *(ptr+i));
  }
  
  return 0;
}