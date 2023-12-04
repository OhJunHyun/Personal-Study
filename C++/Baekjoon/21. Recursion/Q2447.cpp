#include<iostream>
using namespace std;

void star(int row, int col, int a) {
	if ((row / a) % 3 == 1 && (col / a) % 3 == 1) {
		cout << ' ';

	}
	else {
		if (a / 3 == 0) {
			cout << '*';
		}
		else {
			star(row, col, a / 3);
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			star(i, j, n);
		}
		cout << '\n';
	}
	return 0;
}