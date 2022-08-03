#include <stdio.h>

int main() {
	int num = 5;
	int numSize = sizeof(num);
	printf("%d\n", numSize);

	double dnum = 2.0;
	int dnumSize = sizeof(dnum);
	printf("%d", dnumSize);

	return 0;
}