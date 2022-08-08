#include <iostream>
#include <string>
using namespace std;

// 회문 예제

int main() {
	string line;
	getline(cin, line);
	int length = line.length();
	char flag = false;

	for (int i = 0; i < length; i++) {
		if (line[i] != line[length - i - 1]) {
			flag = true;
			break;
		}
	}
		if(flag){
			cout << "회문이 아닙니다.";
		} else {
			cout << "회문입니다.";
		}



	return 0;
}
