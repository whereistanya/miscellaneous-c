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
  // Terminate the array. When printf prints it, it'll stop here, rather than
  // printing garbage for the unused parts of the array.
  binary[index] = '\0';
}

int main() {
  long d;
  printf("Enter a number: ");
  scanf("%ld", &d);
  printf("You said %ld!\n", d);
  char binary[32];
  get_binary(d, binary);
  printf("That means %32s in binary!\n", binary);

  short s = (short) d; 
  printf("If you turn it into a short, it becomes %d\n", s);
  get_binary(s, binary);
  printf("That means %32s in binary!\n", binary);

  return 0;
}
