#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long result = 0;
	for (int i = n-1; i > 0; i--) {
		result += i;
	}
	cout << result << "\n" << 2;
}