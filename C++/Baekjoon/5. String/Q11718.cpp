#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	while (true) {
		getline(cin, s);
		cout << s << endl;

		if (s == "") {
			break;
		}
	}
}