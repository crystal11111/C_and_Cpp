#include <stdio.h>

int login() {
	static int count = 1;
	printf("오늘 로그인 횟수는 %d회 입니다.", count++);
}

int main() {
	
	login();	// 오늘 로그인 횟수는 1회 입니다.
	login();


	return 0;
}
