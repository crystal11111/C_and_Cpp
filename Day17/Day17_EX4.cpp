#include <iostream>
using namespace std;

class Coffee {
public:
	string menu;
	int price;
	string hotorice;
};

int main() {
	Coffee americano;

	americano.menu = "아메리카노";
	americano.price = 4500;
	americano.hotorice = "아이스";

	cout << americano.hotorice << americano.menu << "는" << americano.price << "원 입니다.";
	return 0;
}