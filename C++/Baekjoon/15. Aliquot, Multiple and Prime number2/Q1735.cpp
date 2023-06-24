#include <iostream>
using namespace std;

int gcd(int a, int b) {
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	int a, b, c, d;
	cin >> a >> b;
	cin >> c >> d;
	int s, m;//분자, 분모
	s = a * d + c * b;
	m = b * d;
	int temp = gcd(s, m);

	cout << s / temp << " " << m / temp;
}