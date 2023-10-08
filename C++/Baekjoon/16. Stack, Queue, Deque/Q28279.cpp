#include<iostream>
#include<deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	/*
	1 x : ���� x�� �� �տ� ����
	2 x : ���� x�� �� �ڿ� ����
	3   : ������ ������ �� �� ������ ���� ���. ������ -1
	4   : ������ ������ �� �� ������ ���� ���. ������ -1
	5   : ������ ���� ���
	6   : ���� ��������� 1, �� ��������� 0
	7   : ������ ������ �� ���� ���� ���. ������ -1
	8   : ������ ������ �� ���� ���� ���. ������ -1
	*/
	deque<int> deq;
	int tc, com, n;
	cin >> tc;
	for (int i = 0; i < tc; i++) {
		cin >> com;
		if (com == 1) {
			cin >> n;
			deq.push_front(n);
		}
		else if (com == 2) {
			cin >> n;
			deq.push_back(n);
		}
		else {
			if (com == 3) {
				if (deq.empty()) {
					cout << -1 << '\n';
				}
				else {
					cout << deq.front() << '\n';
					deq.pop_front();
				}
			}
			else if (com == 4) {
				if (deq.empty()) {
					cout << -1 << '\n';
				}
				else {
					cout << deq.back() << '\n';
					deq.pop_back();
				}
			}
			else if (com == 5) {
				cout << deq.size() << '\n';
			}
			else if (com == 6) {
				if (deq.empty()) {
					cout << 1 << '\n';
				}
				else {
					cout << 0 << '\n';
				}
			}
			else if (com == 7) {
				if (deq.empty()) {
					cout << -1 << '\n';
				}
				else {
					cout << deq.front() << '\n';
				}
			}
			else if (com == 8) {
				if (deq.empty()) {
					cout << -1 << '\n';
				}
				else {
					cout << deq.back() << '\n';
				}
			}
		}
	}
}