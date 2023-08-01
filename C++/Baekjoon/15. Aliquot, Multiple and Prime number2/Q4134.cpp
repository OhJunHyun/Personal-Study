#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long a) {
	if (a <= 1) {
		return false;
	}
	if (a == 2 || a == 3) {
		return true;
	}
	if (a % 2 == 0 || a % 3 == 0) {
		return false;
	}
	for (long long i = 5; i<=sqrt(a); i++) {
		if (a % i == 0 || a % (i + 2) == 0) {
			return false;
		}
	}
	return true;

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long tc, n;
	cin >> tc;

	for (int i = 0; i < tc; i++) {
		cin >> n;
		while (!isPrime(n)) {
			n++;
		}
		cout << n <<'\n';
	}

	return 0;
}