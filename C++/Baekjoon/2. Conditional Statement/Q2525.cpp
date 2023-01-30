#include <iostream>
using namespace std;

int main() {
	int hour, minute, cook;
	cin >> hour >> minute;
	cin >> cook;
	/*int a_min = minute + cook;
	if (a_min>=60) {
		hour += (a_min / 60);
		a_min -= (60*(a_min/60));
		if (hour < 24) {
			cout << hour << " " << a_min;
		}
		else if (hour >= 24) {
			hour = 0;
			hour += a_min / 60;
			cout << hour << " " << a_min;
		}
	}
	else if (a_min < 60) {
		cout << hour << " " << a_min;
	}
	return 0;*/

	int eTime = (hour * 60) + minute;
	eTime += cook;
	hour = (eTime / 60) % 24;
	minute = eTime % 60;

	cout << hour << " " << minute;
}