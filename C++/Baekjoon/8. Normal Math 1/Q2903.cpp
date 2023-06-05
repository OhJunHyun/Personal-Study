#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	double  a = 2;
	cin >> n;

	for (int i = 0; i < n; i++) {
		a += pow(2, i);
	}

	cout << (int)pow(a, 2);
	return 0;
}
