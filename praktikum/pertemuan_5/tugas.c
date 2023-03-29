#include <stdio.h>
#include <stdbool.h>

int main() {
  bool lampu = false;

  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      lampu = !lampu;
      if (lampu == true) {
        printf("saklar ditekan | lampu menyala\n");
      } else {
        printf("saklar ditekan | lampu mati\n");
      }
    } else {
      if (lampu == true) {
        printf("lampu menyala\n");
      } else {
        printf("lampu mati\n");
      } 
    }
  }

  return 0;
}