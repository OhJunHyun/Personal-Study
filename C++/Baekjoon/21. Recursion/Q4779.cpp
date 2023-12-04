#include<iostream>
#include<cmath>
using namespace std;

int n;

void cantor(int a) {
	//3^(n-1)¸¸Å­ÀÇ ºó Ä­
	if (a == 0) {
		cout << '-';
		return;
	}
	else {
		cantor(a - 1);
		for (int i = 0; i < pow(3, a - 1); i++) {
			cout << ' ';
		}
		cantor(a - 1);
	}
}

int main() {
	
	while (cin >> n) {
		cantor(n);
		cout << '\n';
	}
	return 0;
}