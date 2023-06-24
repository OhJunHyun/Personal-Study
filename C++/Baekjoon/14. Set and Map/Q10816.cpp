#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> card;//n개의 상근이의 카드
	int n, m, a, b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		card.push_back(a);
	}
	sort(card.begin(), card.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> b;
		cout << upper_bound(card.begin(), card.end(), b) - lower_bound(card.begin(), card.end(), b) << " ";
	}
	
	/*for (int i = 0; i < m; i++) {
		idx = find(s_card.begin(), s_card.end(), card[i]) - s_card.begin();
		
		if (idx == n) {
			cnt = 0;
		}
		else {
			for (int j = idx; j < n; j++) {
				if (s_card[j] == card[i]) {
					cnt += 1;
				}
			}
		}
		cout << cnt << " ";
		cnt = 0;

	}*/
	return 0;
}