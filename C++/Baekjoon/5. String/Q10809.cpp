#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	string alp = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < alp.length(); i++) {
		cout << (int)s.find(alp[i]) << " ";
	}
	return 0;
}