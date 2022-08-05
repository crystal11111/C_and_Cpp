#include <iostream>
#include <string>
using namespace std;

int main() {
	string name = "jason";
	// cin >> name;
	getline(cin, name);
	cout << name;

	return 0;
}