#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long result = 0;
	for (int i = n; i > 0; i--) {
		for (int j = i+1; j < n; j++) {
			result += i;
		}
	}
	
	cout << result << "\n" << 3;
}