#include <iostream>
using namespace std;

int main() {
	int a1, a2, a3;
	cin >> a1 >> a2 >> a3;
	if ((a1 > 0 && a1 < 180) && (a2 > 0 && a2 < 180) && (a3 > 0 && a3 < 180)) {
		if (a1 + a2 + a3 == 180) {
			if (a1 == 60 && a2 == 60 && a3 == 60) {
				cout << "Equilateral";
			}
			else if ((a1 != 60 || a2 != 60 || a3 != 60) &&
				((a1 == a2) || (a1 == a3) || (a2 == a3))) {
				cout << "Isosceles";
			}
			else if (((a1 != a2) || (a1 != a3) || (a2 != a3))) {
				cout << "Scalene";
			}
		}
		else if (a1 + a2 + a3 != 180) {
			cout << "Error";
		}
	}
	else {
		cout << "Error";
	}
	return 0;
}