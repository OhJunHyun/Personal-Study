#include<iostream>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 돈을 차례로 쓰다가 0이 오면 제일 위 지우고 다음 숫자부터 다시 추가
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