// Demonstrate command line arguments and function calls.
#include <stdio.h>

int larger (int x, int y) {
  if (x >= y) {
    return x;
  }
  return y;
}

int main(int argc, char **argv) {
  if (argc != 3) {
    printf("Need two arguments, got %d\n", argc - 1);
    return 1;
  }
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);

  printf("The larger of %d and %d is %d\n", x, y, larger(x, y));

  return 0;
}
