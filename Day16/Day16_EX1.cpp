// C++ = C + Java
//	   = 언어는 C, 코딩(생각) 방법은 Java

// 절차지향 VS 객체지향
// C는 절차지향	(Procedual Programming)
// 프로그램의 실행순서(문제)와 흐름을 먼저 생각		// 동전을 500원을 넣은다음 커피 선택 ~		
// 자판기가 실행순서에 맞게 할 일(함수)을 구현
// 사람의 실행순서에 맞게 할 일을 구현

// C++, Java는 객체지향 (Object-Oriented Programming[OOP])
// 자판기 할 일, 사람 할 일 구현
// 그 다음 프로그램의 순서를 생각


// 객체(Object)
// 현실세계에 존재하는 "상태를 확인할 수 있는 = 행동, 기능" 그 어떤것
// 객체로 문장을 만들 수 있으면, 객체

// 의자 -> 사람이 설명서 보고 만듦
// 건물 -> 사람이 설계도 보고 만듦
// 객체 -> (생성자)가 클래스(Class) 보고 만듦


#include <iostream>		// <stdio.h>
using namespace std;

int main() {
	std::cout << "Hello World!" << std::endl;	// printf("Hello World!\n");
	cout << "Hello World!" << endl;		// using namespace std; 넣었을 때

	char a = 'z';
	cout << "마징가" << a << endl;

	char n;
	cin >> n;		// scanf()
	cout << n << endl;

	return 0;
}