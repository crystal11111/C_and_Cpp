#include <iostream>
using namespace std;

/*
	R G B
	0 ~ 255
	조합 총 몇가지 출력
	조합 모든 경우의 수를 출력
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