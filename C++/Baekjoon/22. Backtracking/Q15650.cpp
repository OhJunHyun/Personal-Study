#include<iostream>
using namespace std;

int n, m;
int arr[9] = { 0, };
bool checked[9] = { false, };

void dfs(int cnt, int num) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	else {
		for (int i = num; i <= n; i++) {
			if (!checked[i - 1]) {
				checked[i - 1] = true;
				arr[cnt] = i;
				dfs(cnt + 1, i + 1);
				checked[i - 1] = false;	
			}
		}
	}
}

int main() {
	cin >> n >> m;
	dfs(0, 1);
}