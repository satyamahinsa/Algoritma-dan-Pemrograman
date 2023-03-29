#include <stdio.h>

// PROCEDURE STRUCTURE
/*
  void <procedure_name>(<parameter_data_type> <parameter_name>) {
    // declaration
    <data_type> <local_variable>

    // algorithm (function body)
  }
*/

void arithmetic(int a, int b) {
  printf("\n%d + %d = %d", a, b, a + b);
  printf("\n%d - %d = %d", a, b, a - b);
  printf("\n%d * %d = %d", a, b, a * b);
  printf("\n%d / %d = %d", a, b, a / b);
  printf("\n");
}

int main() {
  arithmetic(0, 1);
  arithmetic(10, 5);
  arithmetic(3, 4);

  return 0;
}