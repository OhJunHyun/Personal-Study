#include<iostream>
#include <string>
using namespace std;

int main() {
	int dial[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	string s;
	cin >> s;
	int num= 0;
	for (int i = 0; i < s.length(); i++) {
		num += dial[s[i] - 65];
	}
	cout << num << endl;
	return 0;
}