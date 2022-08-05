#include <stdio.h>

int main() {
	
	int arr[] = {1,5,2,6,3,7,4};
	int i, j, k;
	scanf_s("%d %d %d", &i, &j, &k);

	for (int index = i-1; index <= j- 1; index++) {
		printf("%d", arr[index]);
		
	}
	// 잘린 배열 오름차순 정렬
	
	printf("%d", arr[k - 1]);



	return 0;
}