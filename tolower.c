// A character is really an integer. If you have 'A' and you add 1 to it, now
// you have 'B'. Every character has an ascii value which you can look up in
// http://www.gjszlin.cz/ivt/esf/ostatni-sin/images/01_ascii.png
// 'A' and 'a' are 32 characters apart ('A' is 65 and 'a' is 97), so you can
// always convert upper to lower by adding 32.

#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
  if (argc != 2) {
    printf("One argument please\n");
    return 1;
  }

  int i;
  char* string = argv[1];
  for (i = 0; i < strlen(string); i++) {
    if ((string[i] >= 65) && (string[i] <= 90)) {
       // It's uppercase!
       printf("%c\n", string[i] + 32);
    } else {
      // It's not! Just print it as it is.
       printf("%c\n", string[i]);
    }
  }

  return 0;
}
