#include <stdio.h>

/*
정수 1개 입력
입력값보다 작거나 같은 짝수들을 다 더한값을 
출력해주세요.
*/


int main() {
	int num = 5;
	int sum = 0; 

	for (int i = 1; i * 2 <= num; i++) {
		sum = sum + i * 2;
	}

	/* 두번쨰 방법
	for (int i = 2; i <= num; i = i + 2) {
		sum += i;
	}
	*/

	/* 세번쨰 방법
	for (int i = 1; i <= num; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	*/
		
	printf("%d", sum);
	return 0;
}

