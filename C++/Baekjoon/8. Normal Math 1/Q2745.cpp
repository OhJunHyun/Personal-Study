#include<iostream>
#include <cmath>
using namespace std;

//int main() {
//	string str;
//	int ns; //numeral system
//	cin >> str >> ns;
//
//	int sum = 0;
//
//	for (int i = 0; i < str.length(); i++) {
//		int temp = str[str.length() - (i + 1)];
//		if ('0' <= temp && temp <= '9') {
//			temp -= '0'; // '0' = 48
//		}
//		else {
//			temp += (10 - 'A'); // 'A' = 65
//		}
//		sum += (temp * (int)pow(ns, i));
//	}
//	cout << sum;
//}

int main() {
	string str;
	int ns, sum = 0;
	cin >> str >> ns;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			sum = sum * ns + (str[i] - '0'); // str에 숫자가 있을 때, 숫자로 바꾸기
		}
		else {
			sum = sum * ns + (str[i] - 'A' + 10);
		}
	}
	cout << sum;
}