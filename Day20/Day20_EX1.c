//#include <stdio.h>
//
///*
//	함수 오버로딩
//	C++에서는 컴파일러가 함수이름이 같을 때에도 함수를 구분할줄 안다
//	구분 기준 : 매개변수 개수 / 자료형 / 순서
//	반환 타입은 구분 못 함
// 
//	C에서 되면 C++에서 무조건 됨
//*/
//
//int plus(int a, int b, int c) {
//	return a + b + c;
//
//}
///*
//int plus(int a, int b) {
//	return a + b;
//}
//*/
//
//int main() {
//	int result = plus(1, 2, 3);
//	printf("%d\n", result);
//
//	int result2 = plus(3, 4);		// 안됨
//	printf("%d", result2);
//
//	return 0;
//}