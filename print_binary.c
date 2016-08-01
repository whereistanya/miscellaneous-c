// To use math.h, you'll probably need to build with -lm. Here's why:
//
// making an executable takes multiple stages:
// - preprocessing
// - compiling
// - linking
//
// preprocessing:
// Expands all of those 'include's so it's just as if you had typed all the
// libraries at the start of your file. And other stuff you don't need to
// care about yet. But remember, they're .h files: they have the headers, 
// but not the actual code. A header file is like a table of contents: it says
// "These are the functions that exist. Trust me; you can use them." So when
// you include <math.h> or <stdio.h>, your code trusts that the functions
// defined in there exist... somewhere and that you'll link them in later.
// 
// compiling:
// Compiling means making a machine language file called an object file. It's
// not an executable. You can compile without linking if you do gcc -c and look
// at the file it makes. Each source code file turns into one object file, so
// if only one library changes, you don't need to rebuild everything. It's
// faster. The compiler will barf if you call a function you haven't *declared*,
// but it won't care whether the function is actually *defined* somewhere.
//
//   declared:  void ISwearMyFunctionIsSomewhere();
//
//   defined:   void ThisIsTheActualCodeForAFunction() { // do something }
//
// 
// linking:
// Then the linker runs to pull all the object files into an executable. But it also
// needs object files for those libraries you included. Linking lets it find them. 
// gcc links some stuff by default -- that's why you don't need to tell it where 
// stdio really is -- but not everything, because that'd be expensive. So -lm says
// "we'll need the math libraries for this one"

#include <math.h>
#include <stdio.h>

int main(int argc, char** argv) {
  long b;
  printf("Enter a binary number: ");
  scanf("%ld", &b);
  printf("You said %ld!\n", b);

  int d = 0;
  int i = 0;
  int remainder = 0;
  while (b > 0) {
    remainder = b % 10;
    b = b / 10;
    d += remainder * pow(2, i);
    i++;
  }

  printf("That means %d in decimal!\n", d);
  printf("That means %x in hex!\n", d);

  return 0;
}
