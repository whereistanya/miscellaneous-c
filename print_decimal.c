// Ask for a decimal number and print it out as hex and binary.
// Also illustrates input from the command line.
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

// in real life we'd need to be careful about the size of the char array.
void get_binary(long decimal, char* binary) {
  int index;
  index = 0;
  // a little sentinel to let us ignore leading zeroes.
  bool leading = true;
  int i;

  for (i = 31; i >= 0; i--) {
    long p = pow(2, i);
    if (decimal >= p) {
      binary[index] = '1';
      decimal = decimal - p;
      leading = false;
      index++;
    } else if (!leading) {
      binary[index] = '0';
      index++;
    }
  }
  // terminate the array. When printf prints it, it'll stop here, rather than
  // printing garbage for the unused parts of the array.
  binary[index] = '\0';
}

int main() {
  int d;
  printf("Enter a decimal number: ");
  scanf("%d", &d);
  printf("You said %d!\n", d);
  printf("That means %x in hex!\n", d);

  int i;
  char binary[32];
  get_binary(d, binary);
  printf("That means %s in binary!\n", binary);

  return 0;
}
