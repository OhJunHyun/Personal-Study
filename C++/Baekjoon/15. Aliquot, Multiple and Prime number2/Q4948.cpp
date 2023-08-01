#include<iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, cnt, rt;
	while (1) {
		cnt = 0;
		cin >> n;
		if (n == 0) {
			break;
		}

		for (int i = n + 1; i <= (n * 2); i++) {
			rt = sqrt(i);
			if (rt == 1 && i != 1) {
				cnt++;
				continue;
			}
			if (i % 2 != 0) {
				for (int j = 2; j <= rt; j++) {
					if (i % j == 0 ) {
						break;
					}
					if (j == rt) {
						cnt++;
					}
				}
			}
		}
		cout << cnt << "\n";		
	}
	return 0;
}