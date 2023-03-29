#include <stdio.h>

int main() {
  int n, faktor;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    faktor = 0;
    for (int j = 1; j <= i; j++) {
      if (i % j == 0) {
        faktor++;
      }
    }
    if (faktor == 2) {
      printf("%d bilangan prima\n", i);
    } else {
      printf("%d bilangan komposit\n", i);
    }
}

  return 0;
}