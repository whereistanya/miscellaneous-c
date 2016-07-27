// Leak memory. Look at this process using 'ps auw' and see its
// memory footprint increasing.
#include <stdio.h>   // printf
#include <stdlib.h>  // malloc, free
#include <unistd.h>  // sleep

int main() {
  int i, n;
  for (i = 0; i < 100; i++) {
    printf("Mallocing!\n");
    int* m = malloc(1024 * 1024 * 1024);
    sleep(5);
  }

  return 0;
}
