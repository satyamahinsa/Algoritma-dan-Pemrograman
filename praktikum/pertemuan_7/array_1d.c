#include <stdio.h>

int main() {
  int my_arr[5] = {1, 2, 3, 4, 5}, i;
  int *p;
  p = my_arr;
  // dapat juga dituliskan // p = &my_arr[0]

  for(i = 0; i < 5; i++){
    printf("Isi dari *p[%d] = %d\n", i, *(p + i));
    printf("Alamat memori dari p[%d] = %p\n", i, (p + i));
  }

  return 0;
}