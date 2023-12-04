#include<iostream>
using namespace std;

long long int fac(int a) {
	if (a == 0 || a == 1) {
		return 1;
	}
	return a * fac(a - 1);
}
int main() {
	int n;
	cin >> n;
	cout << fac(n);
}