#include<iostream>
using namespace std;

int n, m;
int arr[9] = { 0, };
bool checked[9] = { false, };

void dfs(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	else {
		for (int i = 1; i <= n; i++) {
			if (!checked[i - 1]) {
				checked[i - 1] = true;
				arr[cnt] = i;
				dfs(cnt + 1);
				checked[i - 1] = false;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	dfs(0);

	return 0;
}