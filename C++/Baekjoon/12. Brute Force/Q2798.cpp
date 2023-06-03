#include <iostream>
using namespace std;

int main() {
	int n, m, a, sum = 0, min=999999;
	cin >> n >> m;
	int card[100];
	for (int i = 0; i < n; i++) {
		cin >> a;
		card[i] = a;
	}

	int result = 0;
	
	for (int i = 0; i < n - 2; i++) {
		for (int j = i+1; j < n - 1; j++) {
			for (int k = j+1; k < n; k++) {
				sum = card[i] + card[j] + card[k];
				if ( m - sum < min && sum <= m) {
					min = m - sum;
					result = sum;
				}
			}
		}
	}
	cout << result;
	return 0;
}