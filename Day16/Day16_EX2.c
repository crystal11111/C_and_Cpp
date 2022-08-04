#include <stdio.h>

/*
	3 6 9 게임
	정수 입력
	3의 배수마다 '짝'
*/

int main() {
	int n;
	scanf_s("%d", &n);

	for (int i = 0; i <= n; i++) {
		if (i % 3 == 0) {
			printf("짝");
		}
		else {
			printf("%d", i);
		}
	}
	return 0;
}