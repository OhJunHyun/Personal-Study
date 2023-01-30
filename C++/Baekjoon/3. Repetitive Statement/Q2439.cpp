#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	int test;
	cin >> test;
	for (int i = 1; i <= test; i++) {
		for (int j = 0; j < test - i; j++) {
			cout << " ";
		}
		for (int k = 0; k < i; k++) {
			cout << "*";
		}
		cout << "\n";
	}
}