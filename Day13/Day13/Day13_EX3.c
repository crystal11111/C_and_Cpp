#include <stdio.h>

// 구조체

// cf. 자료구조 만들 때, 구조체 많이 사용
//     ex) 배열 배열의 크기, 배열 리스트 만들떄



/* 우리가 만들어 보는 아스키코드 맵핑 */
struct ASCII {		// 구조체(struct): 변수 여러개를 이용해 만드는 DIY 자료형, 변수 세트를 만들고 싶을 때 사용.
	char abc;		// 마음대로 변수 선언, 자료형 같아도 됨
	int num;
};

int main() {
	struct ASCII a = { 'a', 97 };		// 구조체 값 대입
	printf("%c = %d", a.abc, a.num);

	struct ASCII z = { 'z', 122 };
	printf("%c = %d", z.abc, z.num);

	return 0;
}
