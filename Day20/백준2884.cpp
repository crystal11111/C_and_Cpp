#include <iostream>
using namespace std;

int hour, minute;


int main() {
	cin >> hour >> minute;
	if (minute < 45) {
		minute = abs(minute + 60 - 45);
		hour = hour - 1;
			if (hour == -1) {
				hour = 23;
			}
			if (minute >= 45) {
				minute = minute - 45;
			}

			cout << hour << minute;

	}


	return 0;
}
