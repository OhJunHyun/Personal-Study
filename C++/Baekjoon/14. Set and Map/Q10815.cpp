#include <iostream>
#include <algorithm>
using namespace std;

int card[500001];
int s_card[500001];
int ans[500001];

int main() {
	int n, m, a, b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		card[i] = a;
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> b;
		s_card[i] = b;
	}

	sort(card, card + n);
	for (int i = 0; i < m; i++) {
		int right = n - 1;
		int left = 0;
		while (left <= right) {
			int mid = (right + left) / 2;
			if (card[mid] == s_card[i]) {
				ans[i] = 1;
				break;
			}
			if (card[mid] > s_card[i]) {
				right = mid - 1;
			}
			else {
				left = mid + 1;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		cout << ans[i] << " ";
	}
}