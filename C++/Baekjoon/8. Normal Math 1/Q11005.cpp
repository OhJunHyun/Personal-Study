#include<iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, ns;
	cin >> n >> ns;
	string s = "";
	while (n != 0) {
		int temp = n % ns;
		if (temp > 9) {
			temp = temp - 10 + 'A';
			s += temp;
		}
		else { // 1~9 ������ ��
			s += ('0' + temp); //'0' = 48 --> ���� ǥ��
		}
		n /= ns;
	}
	reverse(s.begin(), s.end());
	cout << s;
}