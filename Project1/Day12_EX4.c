/*
정적변수의 쓰임새
*/

#include <stdio.h>

// int count = 0;	// 누구나 프로그램 시작-종료 접근 가능

void enter() {
	// int count = 0;	// 메모리에 올라감
	static int count = 0;		// 정적변수(static variable): 선언된 중괄호안에서만 쓸 수 있음.(프로그램 종료와 메모리에서 사라짐) (지역변수 + 전역변수)
	count++;

	printf("오늘 입장한 회원은 %d명 입니다.\n", count);
}	// count가 메모리에서 사라짐

int main() {
	enter();
	enter();

	return 0;
}