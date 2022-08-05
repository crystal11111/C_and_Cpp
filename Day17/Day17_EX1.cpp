#include <iostream>
using namespace std;

/*
	arr[26]
	arr[0] = 'a'
	...
	arr[25] = 'z'
	출력해서 확인
 
*/

int main() {
	char arr[26];	// 정수 0 ~ 127

	for (int i = 0; i < 26; i++) {
		arr[i] = 97 + i;
		cout << arr[i] << endl;
	}
	return 0;
}