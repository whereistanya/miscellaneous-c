// Swapping variables without a temp file is a common c parlor trick...
#include <stdio.h>

int main() {
  int x, y;

  x = 10;
  y = 5;

  printf("x is %d and y is %d\n", x, y);

  x = x + y;   // (x+y), y
  y = x - y;   // (x+y), (x+y-y) => (x+y, x)
  x = x - y;   // (x+y-x), x => y, x

// or...
/*
  y = x ^ y;
  x = x ^ y;
  y = x ^ y;
*/

  printf("Now x is %d and y is %d\n", x, y);

  return 0;
}
