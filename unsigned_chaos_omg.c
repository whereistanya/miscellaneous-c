// Comparing signed and unsigned integers is going to make you have a bad day.
#include <stdio.h>

int main() {
  unsigned i;
  short a[10] = {1,2,3,4,5,6,7,8,9,10};

  for (i = 9; i >=0; i--) {
    printf("%d\n ", i);
    printf(" unsigned: %u\n ", i);
    // ternary operator. Short way of saying 'if x do y else z'
    printf(" is it > 0?: %s\n ", (i > 0) ? "true" : "false");
  }
  printf("\n");
  return 0;
}
