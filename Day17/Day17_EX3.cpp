#include <iostream>
using namespace std;

class Book {	// å ��ü�� ����� ���� Ŭ����
	public:	// private
		string name;	// char name[];
		// �� Ŭ������ ��ü�� ����� �Ǹ�
		// �� ��ü�� name�� ���Ե�
};

int main() {

	Book HarryPotter;	// <-- �����ڰ� ����
						// �����ڰ� ���� �� ���� ������
						
	HarryPotter.name = "�ظ�����";
	cout << HarryPotter.name << endl;


	return 0;
}