// Print a number as hex or decimal just by specifying the format in printf.
// Alas, there's isn't one for binary.
#include <stdio.h>

int main() {
  printf("Enter a number in hex: ");
  int hex;
  scanf("%x", &hex);
  printf("You said %x!\n", hex);
  printf("In decimal, that means %d\n", hex);

  return 0;
}
