#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.sync_with_stdio(false);
	int test;
	cin >> test;
	int A, B;
	for (int i = 0; i < test; i++) {
		cin >> A >> B;
		cout << "Case #" << i + 1 << ": " << A << " + " << B << " = " << A + B << "\n";
	}
	return 0;
}