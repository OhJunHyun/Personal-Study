#include<iostream>
#define MAX 14
using namespace std;

int n, cnt = 0;
int board[MAX] = { 0, };

//nqueen은 queen이 놓인 자리가 false인지 true인지 return
bool nqueen(int q) {
	//q(퀸)이 놓인 자리가 board의 각 자리 값이 겹칠 경우 --> 행 겹칩
	//       "          board의 행 차이 값과 열 차이 값이 같을 경우 --> 대각선 겹침
	for (int i = 0; i < q; i++) {
		if (board[i] == board[q] || q - i == abs(board[q] - board[i])) {
			return false;
		}
	}
	return true;
}

void dfs(int row) {
	if (row == n) {
		cnt++;
		return;
	}
	else {
		for (int col = 0; col < n; col++) {
			//퀸 자리 선정
			board[row] = col;

			if (nqueen(row)) {
				dfs(row + 1);
			}
		}
	}
}

int main() {
	cin >> n;

	dfs(0);
	cout << cnt;
	return 0;
}