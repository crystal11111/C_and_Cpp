#include <iostream>
using namespace std;

// ���� �Է¹޾Ƽ� �ùٸ� ��
int main() {
	int n1, n2;
	cin >> n1 >> n2;

	try {
		if (n2 == 0) {
			throw n2;	// --> catch(n2)
		}
		int result = n1 / n2;
		cout << result;
	}
	catch (int wrong_input) {	// input = n2;
		cout << "you put wrong input: "<< wrong_input;
	}

	return 0;
}