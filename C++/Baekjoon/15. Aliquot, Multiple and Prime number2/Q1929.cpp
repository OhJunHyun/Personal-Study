#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
	if (num <= 1) {
		return false;
	}
	if (num == 2 || num == 3) {
		return true;
	}
	if (num % 2 == 0 || num % 3 == 0) {
		return false;
	}

	for (int i = 5; i <= sqrt(num); i++) {
		if (num % i == 0 || num % (i + 2) == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = n; i <= m; i++) {
		if (isPrime(i)) {
			cout << i << '\n';
		}
	}
}