#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a1, a2, a3;
	do {
		vector<int> a;//º¯
		cin >> a1 >> a2 >> a3;
		a.push_back(a1);
		a.push_back(a2);
		a.push_back(a3);
		sort(a.begin(), a.end());

		if (a1 != 0 || a2 != 0 || a3 != 0) {
			if (a1 == a2 && a2 == a3) {
				cout << "Equilateral" << '\n';
				continue;
			}
			if (a[2] < a[0] + a[1]) {
				if (((a1 == a2) && (a2 != a3)) || ((a1 == a3) && (a2 != a3)) || ((a2 == a3) && (a1 != a2))) {
					cout << "Isosceles" << '\n';
				}
				if ((a1 != a2) && (a1 != a3) && (a2 != a3)) {
					cout << "Scalene" << '\n';
				}
			}
			else {
				cout << "Invalid" << '\n';
			}
		}
		else {
			if (a1 == 0 && a2 == 0 && a3 == 0) {
				break;
			}
			cout << "Invalid" << '\n';
		}
		
	} while (a1 != 0 && a2 != 0 && a3 != 0);

	return 0;
}