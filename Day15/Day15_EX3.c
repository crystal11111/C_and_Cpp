#include <stdio.h>

int main() {
	/*
		�迭 �̸��� ���� 2����
		1) �� �迭�� �̸�
		2) �迭 ù ĭ�� �ּ�	
	*/
	int arr[] = { 1,2,3 };		// arr = &arr[0] 
								// int* arr = &arr[0]
	
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]);
	printf("%p\n", &arr[2]);

	int arrSize = sizeof(arr) / sizeof(int);	// 3 = size of array

	for (int i = 0; i < arrSize; i++) {		// ������ for���� ����ϸ� �迭 ���� �� �󸶵��� �־ ����
		arr[i] = (i+1) * 100;
		printf("%d\n", arr[i]);

	return 0;
}