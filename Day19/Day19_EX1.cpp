#include <iostream>
#include <string>
using namespace std;

class Coffee {
	private:
		string name;
		string temp;
	public:
		Coffee(string n, string t);
		string getTemp();
		string getName();
};

Coffee::Coffee(string n, string t) {
	name = n;
	temp = t;
}

string Coffee::getTemp() {
	return temp;
}

string Coffee::getName() {
	return name;
}

int main() {
	Coffee americano("아메리카노", "아이스");
	cout << "주문하신 " << americano.getTemp() 
		<< americano.getName() << "나왔습니다." << endl;

	return 0;
}