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
	//x�� �ٸ��� x�� ������������ x�� ������ y�� ��������
	vector<vector<int>> cor(n, vector<int>(2, 0));
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		cor[i][0] = y;
		cor[i][1] = x;
	}
	sort(cor.begin(), cor.end());
	int temp = 0;
	for (int i = 0; i < n; i++) {
		temp = cor[i][0];
		cor[i][0] = cor[i][1];
		cor[i][1] = temp;
		for (int j = 0; j < 2; j++) {
			cout << cor[i][j] << " ";
		}
		cout << '\n';
	}
}