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

	americano.menu = "�Ƹ޸�ī��";
	americano.price = 4500;
	americano.hotorice = "���̽�";

	cout << americano.hotorice << americano.menu << "��" << americano.price << "�� �Դϴ�.";
	return 0;
}