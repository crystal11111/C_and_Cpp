#include <iostream>
using namespace std;

int main() {
	int age;
	cin >> age;

	while (age <= 0) {
		try {
			if (age <= 0) {
				throw age;
			}
		}
		catch (int wrong) {
			cout << "�߸��� �� " << wrong << " �Է�. �ٽ� ����� �Է��ϼ���" << endl;
			cin >> age;
		}
	}
	cout << age << "�� �̽ó׿�!";
	


	return 0;
}