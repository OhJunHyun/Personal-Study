#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	set<string> employee;

	for (int i = 0; i < n; i++) {
		string name, el;
		cin >> name >> el;
		if (el == "enter") {
			employee.insert(name);
		}
		else {
			employee.erase(name);
		}
	}

	for (auto iter = employee.rbegin(); iter != employee.rend(); iter++) {
		cout << *iter << '\n';
	}
}