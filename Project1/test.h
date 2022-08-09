#pragma once

#include <stdio.h>

void enter() {
	// int count = 0;	// 메모리에 올라감
	static int count = 0;	// 정적변수(static variable): 선언된 중괄호안에서만 쓸 수 있음.(프로그램 종료와 메모리에서 사라짐) (지역변수 + 전역변수)
	count++;

	printf("오늘 입장한 회원은 %d명 입니다.\n", count);
}	// count가 메모리에서 사라짐
