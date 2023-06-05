#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	
	vector<vector<int>> arr1(n, vector<int>(m, 0));
	vector<vector<int>> arr2(n, vector<int>(m, 0));
	vector<vector<int>> arr3(n, vector<int>(m, 0));
	int number;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> number;
			arr1[i][j] = number;
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> number;
			arr2[i][j] = number;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr3[i][j] << " ";
		}
		cout << '\n';
	}
}