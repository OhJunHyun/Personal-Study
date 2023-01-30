#include <iostream>
#include <vector>
using namespace std;

int main() {
	int d1, d2, d3;
	cin >> d1 >> d2 >> d3;
	if (d1 == d2 && d1 == d3) {
		cout << 10000 + (d1 * 1000);
	}
	else if ((d1 == d2) && d1 != d3) {
		cout << 1000 + d1 * 100;
	}
	else if ((d2 == d3) && d2 != d1) {
		cout << 1000 + d2 * 100;
	}
	else if ((d1 == d3) && d1 != d2) {
		cout << 1000 + d1 * 100;
	}
	else if ((d1 != d2) && (d2 != d3) && d1 != d3) {
		int maxnum;
		if (d1 > d2 && d1 > d3) {
			maxnum = d1;
		}
		else if (d2 > d3 && d2 > d1) {
			maxnum = d2;
		}
		else if (d3 > d1 && d3 > d2) {
			maxnum = d3;
		}
		cout << maxnum*100;
	}
}