#include <iostream>
using namespace std;

/*
	R G B
	0 ~ 255
	���� �� ��� ���
	���� ��� ����� ���� ���
*/
int main() {
	int count = 0;
	for (int i = 0; i < 256; i++) {
		for (int j = 0; j < 256; j++) {
			for (int k = 0; k < 256; k++) {
				count++;
			}
		}
	}
	cout << count;

	return 0;
}