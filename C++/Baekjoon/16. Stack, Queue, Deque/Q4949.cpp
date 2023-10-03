#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true) {
		string str;
		char c;
		stack<char> s;
		bool check = true;

		//�� �´� �̷��� �����̽� �����̱���..........cin >> str;

		getline(cin, str);

		if (str == ".") {
			break;
		}
		else {
			for (int i = 0; i < str.length(); i++) {
				c = str[i];
				if ((c == '(') || (c == '[')) {
					s.push(c);
				}
				else if (c == ')') {
					if (!s.empty() && s.top() == '(') {
						s.pop();
					}
					else {
						check = false;
						break;
					}
				}
				else if (c == ']') {
					if (!s.empty() && s.top() == '[') {
						s.pop();
					}
					else {
						check = false;
						break;
					}
				}
			}
		}
		if (check == true && s.empty()) {
			cout << "yes" << '\n';
		}
		else {
			cout << "no" << '\n';
		}
	}
	return 0;
}