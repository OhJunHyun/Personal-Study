#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int max = -1, row, col;
	int arr[9][9];

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j] > max) {
				max = arr[i][j];
				row = i;
				col = j;
			}
		}
	}
	cout << max << "\n" << row+1 << " " << col+1 << endl;

	return 0;
}