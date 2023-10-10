#include<iostream>
using namespace std;

int main() {
	int n, k, r = 1;
	cin >> n >> k;
	//n C k
	for (int i = 0; i < k; i++) {
		r = r * (n--);
	}
	for (int j = 1; j <= k; j++) {
		r /= j;
	}
	cout << r;
}