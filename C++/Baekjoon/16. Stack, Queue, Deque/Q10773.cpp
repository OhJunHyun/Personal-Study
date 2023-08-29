#include<iostream>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// ���� ���ʷ� ���ٰ� 0�� ���� ���� �� ����� ���� ���ں��� �ٽ� �߰�
	int k;
	cin >> k;
	int money, sum = 0;
	stack<int> ledger;
	while (k--) {
		cin >> money;
		if (money != 0) {
			ledger.push(money);
		}
		else {
			ledger.pop();
		}
	}
	
	while (!ledger.empty()) {
		sum += ledger.top();
		ledger.pop();
	}
	cout << sum;
}