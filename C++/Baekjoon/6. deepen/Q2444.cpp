#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		for (int j = 0; j < t - i; j++) {
			cout << " "; //ºóÄ­ 4 3 2 1 0
		}
		for (int k = 0; k < 2 * i - 1; k++) {
			cout << "*";
		}
		cout << '\n';
	}
	for (int i = 1; i < t; i++) {
		for (int j = 0; j < i; j++) {
			cout << " "; //ºóÄ­ 1 2 3 4
		}
		for (int k = 0; k < 2 * t - (i * 2 + 1); k++) {
			cout << "*";
		}
		cout << '\n';
	}
}