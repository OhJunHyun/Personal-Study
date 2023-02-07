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
		cout << A + B << "\n";
	}
}