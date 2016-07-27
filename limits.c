// How big are signed and unsigned numeric types? What happens if you
// cast them into different types?
#include <stdio.h>
#include <limits.h>

int main(){
  printf("uint_max (long) %ld\n", (long)UINT_MAX);
  printf("uint_max (int) %d\n", UINT_MAX);
  printf("uint_max (uint) %u\n", UINT_MAX);
  printf("int_max (long) %ld\n", (long)INT_MAX);
  printf("int_max (int) %d\n", INT_MAX);
  printf("int_max (uint) %u\n", INT_MAX);
  printf("int_min (long) %ld\n", (long)INT_MIN);
  printf("int_min (int) %d\n", INT_MIN);
  printf("int_min (uint) %u\n", INT_MIN);
  // But there's no unsigned minimum! By definition, it's zero.
  printf("long_max (long) %ld\n", LONG_MAX);
  printf("long_max (int) %d\n", (int)LONG_MAX);
  printf("ulong_max (long) %ld\n", ULONG_MAX);
  printf("ulong_max (int) %d\n", (int)ULONG_MAX);
  printf("long_min (long) %ld\n", LONG_MIN);
  printf("long_min (int) %d\n", (int)LONG_MIN);
  return 0;
}
