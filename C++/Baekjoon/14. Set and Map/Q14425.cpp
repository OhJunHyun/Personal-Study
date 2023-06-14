#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<string> S;//그냥..예..뭐 집합
vector<string> I;//검사해야하는 집합

int main() {
	int n, m, cnt = 0;
	cin >> n >> m;
	string a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		S.push_back(a);
	}
	for (int i = 0; i < m; i++) {
		cin >> a;
		I.push_back(a);
	}

	sort(S.begin(), S.end());
	for (int i = 0; i < m; i++) {
		int right = n - 1;
		int left = 0;
		while (left <= right) {
			int mid = (right + left) / 2;
			if (S[mid] == I[i]) {
				cnt++;
				break;
			}
			if (S[mid] > I[i]) {
				right = mid - 1;
			}
			else {
				left = mid + 1;
			}
		}
	}
	cout << cnt;
	
}