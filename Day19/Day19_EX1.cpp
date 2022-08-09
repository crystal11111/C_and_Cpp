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
	Coffee americano("�Ƹ޸�ī��", "���̽�");
	cout << "�ֹ��Ͻ� " << americano.getTemp() 
		<< americano.getName() << "���Խ��ϴ�." << endl;

	return 0;
}