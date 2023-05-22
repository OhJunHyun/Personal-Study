#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long n;
	cin >> n;
	/*long rad = 0, dup = 0;

	for (int i = 1; i <= n; i++) {
		rad += (i * 4);
	}

	for (int i = 1; i < n; i++) {
		dup += (i * 2);
	}

	cout << rad - (dup * 2) << endl;*/
	cout << 4 * n;
}