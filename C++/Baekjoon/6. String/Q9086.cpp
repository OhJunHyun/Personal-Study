#include <iostream>
using namespace std;

int main() {
	int test;
	cin >> test;

	string s;
	while (test--) {
		cin >> s;
		cout << s[0] << s[s.length() - 1] << endl;
	}
	return 0;
}