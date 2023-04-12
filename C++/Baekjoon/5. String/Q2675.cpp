#include<iostream>
#include <string>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int r;
		cin >> r;
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < r; j++) {
				cout << s[i];
			}
		}
		cout << "\n";
	}
}