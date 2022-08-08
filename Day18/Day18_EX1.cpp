#include <iostream>
using namespace std;

/*
	- 클래스의 구성요소

	- 필드 (클래스 안의 변수)
	: 객체의 데이터/ 부품
	ex) 사람 - 이름, 나이, 몸무게, 키, 학점,...
	    커피 - 이름, 온도, 가격, 맛, ...

	- 메소드 (클래스 안의 함수)
	: 객체의 기능/ 행동/ 상태
	ex) 사람 - 먹는다, 잔다, 걷는다, 뛴다,...
	    커피 - 만들어진다, ...

	- 생성자 Constructor=ctor (반환타입이 없는, 클래스 이름이랑 같은 특별한 메소드)
	: 클래스를 기반으로 객체를 생성해줌
		+ 객체의 변수/함수를 우리가 사용(접근)할 수 있도록 해줌
	--> 객체를 메모리에 올려줌
	ex) Snack() {
		}
*/

class Snack {
private:	// 밖에서 접근 X
	string name;	// 필드
	int price;
public:		// 밖에서 접근 가능
	Snack(string n);	// 생성자
	void setName(string n);		// 클래수 함수 선언 -> 밑에 있다고 알려줌
	string getName();			
	void ASMR();
	int setPrice(int p);
	int getPrice();
	void info();
};

Snack::Snack(string n) {	// 생성자
	name = n;

}

// 클래스 함수 구현
// 반환 타입 클래스명::함수명() <-- 이 클래스의 함수다라고 말하는 것
void Snack::setName(string n) {
	name = n;

}

string Snack::getName() {
	return name;
}

void Snack::ASMR() {
	cout << "바삭바삭" << endl;
}

int Snack::setPrice(int p) {
	return price = p;
}

int Snack::getPrice() {
	return price;
}

void Snack::info() {
	cout << "과자의 이름은 " << name << "이고, 가격은 " << price << "원 입니다." << endl;
}

int main()	{
	Snack poca("수미칩");	// 생성자 호출방법
	// poca.setName("포카칩");
	// poca.name = "포카칩";
	cout << poca.getName() << endl;
	poca.ASMR();
	poca.setPrice(1800);
	poca.info();


	return 0;
}
