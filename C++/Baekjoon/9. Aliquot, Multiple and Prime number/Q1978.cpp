#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, f, s = 0;
	cin >> n;

	vector<int> isPrime;
	while (n--) {
		cin >> f;
		isPrime.push_back(f);
	}

	for (int i = 0; i < isPrime.size(); i++) {
		vector<int> factor = {};
		for (int j = 1; j <= isPrime[i]; j++) {
			if (isPrime[i] % j == 0 && isPrime[i] / j != 0) {
				factor.push_back(j);
			}
		}
		if (factor.size() == 2) {
			s += 1;
		}
	}

	cout << s;
	return 0;
}