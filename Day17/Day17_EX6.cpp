#include <iostream>
#include <string>
using namespace std;

// ȸ�� ����



int main() {
	string line;
	getline(cin, line);

	if (strlen(line) % 3 == 0) {
		middle = strlen(line) / 2;
		line[1] == line[3];
		cout << "ȸ���Դϴ�.";
	}

	else if (strlen(line)%2==0) {
		
	}

	return 0;
}