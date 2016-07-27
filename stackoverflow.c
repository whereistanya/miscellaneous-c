// Generate a stack overflow. You can see your stack size with ulimit -s
#include <stdio.h>

int main() {
  printf("I am about to run! Sure hope I don't stack overflow!\n");
  int i;
  // limit is 8192 * 1024 bytes
  // each int is 4 * 1024 bytes
  // 8192 / 4 = 2048
  int n = 1024 * 2047;
  printf("This array will be %ld KB!\n", (sizeof(int) * n) / 1024);
  int myarray[n];
  for (i = 0; i < n; i++) {
    myarray[i] = 0;
  }
  printf("Nothing bad happened! Hurray!\n");

}
