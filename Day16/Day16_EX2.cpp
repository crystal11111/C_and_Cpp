#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i <= n; i++) {
		if (i % 3 == 0) {
			cout << "¦";
		}
		else if (i % 5 == 0) {
			cout << "¦¦";
		}
		else {
			cout << i << " ";
		}
	}	
		return 0;
	}
