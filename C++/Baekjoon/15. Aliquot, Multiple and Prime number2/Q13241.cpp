#include <iostream>
using namespace std;

int gcd(long a, long b) {
	long c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	long a, b;
	cin >> a >> b;
	cout << a * b / gcd(a, b) << '\n';
	return 0;
}