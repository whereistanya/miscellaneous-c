// Reading args.
#include <stdio.h>

int main(int argc, char **argv) {
  printf("The number of args is %d\n", argc);
  printf("The program name is %s\n", argv[0]);
  printf("The first arg is %s\n", argv[1]);

  return 0;
  
}
