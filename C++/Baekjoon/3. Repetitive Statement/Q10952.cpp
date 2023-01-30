#include <iostream>
using namespace std;

int main() {
	int A, B;
	do {
		cin >> A >> B;
		if (A != 0 && B != 0)
			cout << A + B << endl;
		else
			return 0;
	}
	while (A != 0 && B != 0);
}