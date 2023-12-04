#include<iostream>
using namespace std;

int n, m;
int arr[8] = { 0, };
bool checked[8] = { false, };

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
			//if (!checked[i - 1]) {
				checked[i - 1] = true;
				arr[cnt] = i;
				dfs(cnt + 1);
				checked[i - 1] = false;
			//}
		}
	}
}

int main() {
	cin >> n >> m;
	dfs(0);

	return 0;
}