#include <stdio.h>

// 동적할당

int plus(int a, int b) {
	return a + b;
}

int main() {
	int arr[] = { 1,2,3,4,5 };
	// 배열 선언 방법 1
	// []안에 숫자가 없어서, 뒤에 컴퓨터가 셈

	// int arr2[2] = { 1,2,3,4,5 };		// 에러
	// 배열 선언 방법 2
	// []안에 숫자가 있으면

	/*
		배열 선언 방법 2가지
		1. int arr[] = {1,2};
		2. int arr[2] = {1,2};	
	*/
	int result = plus(arr[0], arr[1]);

	printf("%d", result);


	return 0;
}