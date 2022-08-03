#include <stdio.h>
#include <stdlib.h>	// 라이브러리

int main() {
	int n;			// 변수, 배열도 변수
	scanf_s("%d", &n);

	int* arr = malloc(n * sizeof(int));		// 동적할당(memory allocation)
			// 배열 첫칸의 주소
	// =int arr[n];	

	for (int i = 0; i<n; i++) {
		arr[i] = (i+1) * 100;
		printf("%d\n", arr[i]);
	}

	free(arr);	// 메모리에서 사라짐

		
	return 0;
}

// 변수를 선언하면 컴퓨터가 어디 저장?
// 메모리 RAM
// - 코드영역: 코드저장
// - 데이터영역: 전역, 정적 변수
// - 스택 영역: 지역변수, 매개변수
// - 힙 영역: 개발자가 동적할당(memory allocation) 할 때 사용하는 공간
