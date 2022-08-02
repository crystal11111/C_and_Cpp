#include <stdio.h>

// Call by Value | Call by Reference
// 값으로 함수 호출 | 주소값(포인터)으로 함수 호출
// 함수 호출 할 때 매개변수로 value(= 값) 전달 | 주소값 던짐  


// Call by Value 예시
void changeNum(int a) {		// int a = num;
	a = 7;					// int a = 5;
}

int main() {
	int num = 5;
	changeNum(num);
	printf("%d", num);

	return 0;
}
	
	
// Call by Reference 예시
void changeNum(int* a) {	// int* a = &num;
	*a = 7;			
}

int main() {
	int num = 5;
	changeNum(&num);
	printf("%d", num);

	return 0;
}

