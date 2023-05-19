#include <iostream>
#include <vector>
using namespace std;

int main() {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	int x4 = 0;
	int y4 = 0;
	
	if (x1 - x2 == 0)
		x4 = x3;
	else {
		if (x1 == x3)
			x4 = x2;
		else
			x4 = x1;
	}

	if (y1 - y2 == 0)
		y4 = y3;
	else {
		y4 = y1;
		if (y1 == y3)
			y4 = y2;
		else
			y4 = y1;
	}

	cout << x4 << " " << y4;
}