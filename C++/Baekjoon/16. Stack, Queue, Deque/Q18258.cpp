#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int> nums;
	string com;//command
	int tc, n;//test case, number
	cin >> tc;

	for (int i = 0; i < tc; i++) {
		cin >> com;
		if (com == "push") {
			cin >> n;
			nums.push(n);
		}
		else {
			if (com == "pop") {
				if (nums.empty()) {
					cout << -1 << '\n';
				}
				else {
					cout << nums.front() << '\n';
					nums.pop();
				}
			}
			else if (com == "size") {
				cout << nums.size() << '\n';
			}
			else if (com == "empty") {
				if (nums.empty()) {
					cout << 1 << '\n';
				}
				else {
					cout << 0 << '\n';
				}
			}
			else if (com == "front") {
				if (nums.empty()) {
					cout << -1 << '\n';
				}
				else {
					cout << nums.front() << '\n';
				}
			}
			else if (com == "back") {
				if (nums.empty()) {
					cout << -1 << '\n';
				}
				else {
					cout << nums.back() << '\n';
				}
			}
		}
	}
	return 0;
}