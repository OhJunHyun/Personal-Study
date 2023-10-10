#include<iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;

	for (int i = 0; i < tc; i++) {
		int n, m;
		long long c = 1;
		cin >> n >> m;

		if (n > ((m - n))) {
			n = (m - n);
		}
		for (int j = 0; j < n; j++) {
			c *= (m--);
		}
		for (int k = 1; k <= n; k++) {
			c /= k;
		}

		cout << c << '\n';
	}
}