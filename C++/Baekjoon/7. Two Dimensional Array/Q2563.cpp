#include <iostream>
using namespace std;

int white[100][100];

int main() {
	int tc, x, y, cnt = 0;
	cin >> tc;
	while (tc--) {
		cin >> x >> y;
		for (int i = y; i < y + 10; i++) {
			for (int j = x; j < x + 10; j++) {
				if (!white[i][j]) {
					cnt++;
					white[i][j] = 1;
				}
			}
		}
	}
	cout << cnt;
}