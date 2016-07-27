// Print out the memory address and contents of each byte of a character array.
// We print out the contents in decimal and binary to make it clear what's
// happening.
#include <math.h>
#include <stdio.h>

// Very often, unsigned char * is used as a way of poking at individual bytes of
// something that you would usually treat as a whole thing. It's traditionally
// used to look at raw memory.

// typedef means "hey compiler, whenever you see the word 'pointer', which I made
// up, put in 'unsigned char*' instead."
typedef unsigned char* pointer;

void get_binary(long decimal, char* binary) {
  int index;
  index = 0;
  int i;

  // This program is about printing out bytes, which are 8 bits long, so we want
  // to return a binary number that's 8 bits long. Hence checking for 0-7 here.
  for (i = 7; i >= 0; i--) {
    long p = pow(2, i);
    if (decimal >= p) {
      binary[index] = '1';
      decimal = decimal - p;
      index++;
    } else {
      binary[index] = '0';
      index++;
    }
  }
  // Terminate the array. When printf prints it, it'll stop here, rather than
  // printing garbage for the unused parts of the array.
  binary[index] = '\0';
}


// size_t is a type guaranteed to hold any array index. But it's probably an
// unsigned integer.
void show_bytes(unsigned char* start, size_t len) {
  size_t i;
  for (i = 0; i < len; i++) {
    char binary[32];
    get_binary(start[i], binary);
    // %p means print a pointer. By convention, the address is in hexadecimal.
    // \t means print a tab. Neater than spaces!
    printf("%p\t%d\t%s\n", start + i, start[i], binary);
  }
  printf("\n");
}

int main(int argc, char** argv) {
  if (argc != 2) {
    printf("Need one arg\n");
    return 1;
  }
  int a = atoi(argv[1]);
  printf("an int is %ld bytes!\n", sizeof(int));
  printf("a pointer to an int is %ld bytes!\n", sizeof(int*));

  show_bytes((pointer) &a, sizeof(int));

  return 0;

}
