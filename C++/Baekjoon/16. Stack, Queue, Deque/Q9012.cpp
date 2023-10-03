#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;

	while (n--) {
		stack<int> arr;
		string brc; //bracket °ýÈ£
		cin >> brc;

		for (int i = 0; i < brc.size(); i++) {
			if (brc[i] == '(') {
				arr.push(0);
			}
			else {
				if (arr.empty()) {
					cout << "NO" << '\n';
					arr.push(1);
					break;
				}
				arr.pop();
			}
		}

		if (arr.empty()) {
			cout << "YES" << '\n';
		}
		else {
			if (arr.top() == 1) {
				continue;
			}
			cout << "NO" << '\n';
		}
	}
	return 0;
}