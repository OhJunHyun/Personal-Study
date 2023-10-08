#include<iostream>
#include<deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	/*
	1 x : 정수 x를 덱 앞에 넣음
	2 x : 정수 x를 덱 뒤에 넣음
	3   : 정수가 있으면 맨 앞 정수를 빼고 출력. 없으면 -1
	4   : 정수가 있으면 맨 뒤 정수를 빼고 출력. 없으면 -1
	5   : 정수의 개수 출력
	6   : 덱이 비어있으면 1, 안 비어있으면 0
	7   : 정수가 있으면 맨 앞의 정수 출력. 없으면 -1
	8   : 정수가 있으면 맨 뒤의 정수 출력. 없으면 -1
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