#include <iostream>>
using namespace std;

int main() {
	int hour, minute, a_min;
	cin >> hour >> minute;

	a_min = minute - 45;
	if (a_min < 0) {
		hour -= 1;
		a_min = 60 - (45 - minute);
		if (hour < 0) {
			hour = 23;
		}
	}
	cout << hour << " " << a_min;
}