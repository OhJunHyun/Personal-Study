#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int basket[101];
	for (int i = 1; i <= 100; i++) {
		basket[i] = i;
	}
	int begin, end, mid;
	for (int i = 0; i < m; i++) {
		cin >> begin >> end >> mid;
		int start = begin;
		int basket2[101] = { 0 };

		for (int j = begin; j < mid; j++) {
			basket2[j] = basket[j];
		}

		for (int k = mid; k <= end; k++) {
			basket[start] = basket[k];
			start++;
		}

		for (int l = begin; l < mid; l++) {
			basket[start] = basket2[l];
			start++;
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << basket[i] << " ";
	}
	return 0;
}