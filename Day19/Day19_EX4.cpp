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
			cout << "잘못된 수 " << wrong << " 입력. 다시 양수를 입력하세요" << endl;
			cin >> age;
		}
	}
	cout << age << "살 이시네요!";
	


	return 0;
}