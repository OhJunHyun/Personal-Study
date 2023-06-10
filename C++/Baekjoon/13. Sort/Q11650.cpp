#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	//x가 다르면 x를 오름차순으로 x가 같으면 y의 오름차순
	vector<vector<int>> cor(n, vector<int>(2, 0));
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		cor[i][0] = x;
		cor[i][1] = y;
	}

	sort(cor.begin(), cor.end());

	/*vector<int> temp;
	for (int i = n-1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (cor[j][0] < cor[j+1][0]) {
				temp = cor[j];
				cor[j] = cor[j+1];
				cor[j+1] = temp;
			}
		}
	}

	for (int i = 0; i < n-1; i++) {
		if (cor[i][0] == cor[i+1][0] && cor[i][1] < cor[i+1][1]) {
			temp = cor[i];
			cor[i] = cor[i + 1];
			cor[i + 1] = temp;
		}
	}*/

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cout << cor[i][j] << " ";
		}
		cout << '\n';
	}
}