#include <stdio.h>

int main() {
	/*
		배열 이름의 역할 2가지
		1) 찐 배열의 이름
		2) 배열 첫 칸의 주소	
	*/
	int arr[] = { 1,2,3 };		// arr = &arr[0] 
								// int* arr = &arr[0]
	
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]);
	printf("%p\n", &arr[2]);

	int arrSize = sizeof(arr) / sizeof(int);	// 3 = size of array

	for (int i = 0; i < arrSize; i++) {		// 사이즈 for문에 사용하면 배열 안의 값 얼마든지 넣어도 간편
		arr[i] = (i+1) * 100;
		printf("%d\n", arr[i]);

	return 0;
}