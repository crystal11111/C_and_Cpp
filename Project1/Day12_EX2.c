#include <stdio.h>

int a = 7;  // 전역변수(global variable) : 감싸고 있는 중괄호 없음. 전체코드에서 쓸 수 있음 (프로그램 시작과 동시에 메모리에 올라감)

void localTest() {
	int b = 3;	// 지역변수는 선언될 때 메모리에 올라감
}	// 중괄호가 끝나면, 메모리에서 사라집니다.

int main() {
	int n;	// 지역변수(local variable): 감싸고있는 중괄호 있음. 선언된 중괄호 안에서만 쓸 수 있음. (중괄호가 끝날때 메모리에서 사라짐)
	
	localTest();

	printf("%d", a);
	return 0;
}