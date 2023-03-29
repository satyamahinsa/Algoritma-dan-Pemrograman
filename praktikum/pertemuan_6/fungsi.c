#include <stdio.h>

// FUNCTION STRUCTURE
/*
  <return_type> <function_name>(<parameter_data_type> <parameter_name>) {
    // declaration
    <data_type> <local_variable>

    // algorithm (function body)

    return <return_value>
  }
*/

int sum() {
  int result = 5 + 3;
  return result;
}

int main() {
  printf("%d", sum());

  return 0;
}