#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int cntWB(int a, int b);
int cntBW(int a, int b);

string board[50];
string board_w[8] = { "WBWBWBWB",
					  "BWBWBWBW",
					  "WBWBWBWB",
					  "BWBWBWBW",
					  "WBWBWBWB",
					  "BWBWBWBW",
					  "WBWBWBWB",
					  "BWBWBWBW" };
string board_b[8] = { "BWBWBWBW",
					  "WBWBWBWB",
					  "BWBWBWBW",
					  "WBWBWBWB",
					  "BWBWBWBW",
					  "WBWBWBWB",
					  "BWBWBWBW",
					  "WBWBWBWB" };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		getline(cin, board[i]);
	}
	int minVal = 65;

	for (int i = 0; i + 8 <= n; i++) {
		for (int j = 0; j + 8 <= m; j++) {
			int temp = min(cntWB(i, j), cntBW(i, j));
			if (temp < minVal) {
				minVal = temp;
			}
		}
	}
	cout << minVal;
	return 0;
}

int cntWB(int a, int b) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[a + i][b + j] != board_w[i][j]) {
				cnt++;
			}
		}
	}
	return cnt;
}
int cntBW(int a, int b) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[a + i][b + j] != board_b[i][j]) {
				cnt++;
			}
		}
	}
	return cnt;
}