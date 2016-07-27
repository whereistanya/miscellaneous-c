// Show the difference between x++ and ++x
#include <stdio.h>

int main() {
	int a = 2;
	int b = 2;
	int c = a++;
	int d = ++b;

	printf("a = %d, b= %d, c= %d, d= %d\n", a, b, c, d);

	return 0;
}
