#include <iostream>
#include <string>
using namespace std;

// 회문 예제



int main() {
	string line;
	getline(cin, line);

	if (strlen(line) % 3 == 0) {
		middle = strlen(line) / 2;
		line[1] == line[3];
		cout << "회문입니다.";
	}

	else if (strlen(line)%2==0) {
		
	}

	return 0;
}