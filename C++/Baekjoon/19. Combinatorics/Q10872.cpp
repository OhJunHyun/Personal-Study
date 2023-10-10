#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int fac=1;
	if (n > 0) {
		for (int i = 1; i <= n; i++) {
			fac *= i;
		}
	}
	else {
		fac = 1;
	}
	
	cout << fac;
}