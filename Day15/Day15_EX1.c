#include <stdio.h>

// �����Ҵ�

int plus(int a, int b) {
	return a + b;
}

int main() {
	int arr[] = { 1,2,3,4,5 };
	// �迭 ���� ��� 1
	// []�ȿ� ���ڰ� ���, �ڿ� ��ǻ�Ͱ� ��

	// int arr2[2] = { 1,2,3,4,5 };		// ����
	// �迭 ���� ��� 2
	// []�ȿ� ���ڰ� ������

	/*
		�迭 ���� ��� 2����
		1. int arr[] = {1,2};
		2. int arr[2] = {1,2};	
	*/
	int result = plus(arr[0], arr[1]);

	printf("%d", result);


	return 0;
}