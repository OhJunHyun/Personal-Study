#include<iostream>
#define MAX 14
using namespace std;

int n, cnt = 0;
int board[MAX] = { 0, };

//nqueen�� queen�� ���� �ڸ��� false���� true���� return
bool nqueen(int q) {
	//q(��)�� ���� �ڸ��� board�� �� �ڸ� ���� ��ĥ ��� --> �� ��Ĩ
	//       "          board�� �� ���� ���� �� ���� ���� ���� ��� --> �밢�� ��ħ
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
			//�� �ڸ� ����
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