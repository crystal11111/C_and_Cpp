#include <iostream>
using namespace std;

/*
	- Ŭ������ �������

	- �ʵ� (Ŭ���� ���� ����)
	: ��ü�� ������/ ��ǰ
	ex) ��� - �̸�, ����, ������, Ű, ����,...
		Ŀ�� - �̸�, �µ�, ����, ��, ...

	- �޼ҵ� (Ŭ���� ���� �Լ�)
	: ��ü�� ���/ �ൿ/ ����
	ex) ��� - �Դ´�, �ܴ�, �ȴ´�, �ڴ�,...
		Ŀ�� - ���������, ...

	- ������ Constructor=ctor (��ȯŸ���� ����, Ŭ���� �̸��̶� ���� Ư���� �޼ҵ�)
	: Ŭ������ ������� ��ü�� ��������
		+ ��ü�� ����/�Լ��� �츮�� ���(����)�� �� �ֵ��� ����
	--> ��ü�� �޸𸮿� �÷���
	ex) Snack() {
		}
*/

class Snack {
private:	// �ۿ��� ���� X
	string name;	// �ʵ�
	int price;
public:		// �ۿ��� ���� ����
	Snack(string n);	// ������
	void setName(string n);		// Ŭ���� �Լ� ���� -> �ؿ� �ִٰ� �˷���
	string getName();			
	void ASMR();
	int setPrice(int p);
	int getPrice();
	void info();
};

Snack::Snack(string n) {	// ������
	name = n;

}

// Ŭ���� �Լ� ����
// ��ȯ Ÿ�� Ŭ������::�Լ���() <-- �� Ŭ������ �Լ��ٶ�� ���ϴ� ��
void Snack::setName(string n) {
	name = n;

}

string Snack::getName() {
	return name;
}

void Snack::ASMR() {
	cout << "�ٻ�ٻ�" << endl;
}

int Snack::setPrice(int p) {
	return price = p;
}

int Snack::getPrice() {
	return price;
}

void Snack::info() {
	cout << "������ �̸��� " << name << "�̰�, ������ " << price << "�� �Դϴ�." << endl;
}

int main()	{
	Snack poca("����Ĩ");	// ������ ȣ����
	// poca.setName("��īĨ");
	// poca.name = "��īĨ";
	cout << poca.getName() << endl;
	poca.ASMR();
	poca.setPrice(1800);
	poca.info();


	return 0;
}