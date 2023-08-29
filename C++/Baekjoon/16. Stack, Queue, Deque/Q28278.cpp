#include<iostream>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cc;// = Command Count
	cin >> cc;
	stack<int> nums;
	int n, x; //Command

	while (cc--) {
		cin >> n;
		if (n == 1) {
			cin >> x;
			nums.push(x);
			continue;
		}
		else if (n == 2) {
			if (nums.empty()) {
				cout << -1 << '\n';
				continue;
			}
			else {
				cout << nums.top() << '\n';
				nums.pop();
				continue;
			}
		}
		else if (n == 3) {
			cout << nums.size() << '\n';
			continue;
		}
		else if (n == 4) {
			if (nums.empty()) {
				cout << 1 << '\n';
				continue;
			}
			else {
				cout << 0 << '\n';
				continue;
			}
		}
		else if (n == 5) {
			if (!nums.empty()) {
				cout << nums.top() << '\n';
				continue;
			}
			else {
				cout << -1 << '\n';
				continue;
			}
		}
	}
	return 0;
}