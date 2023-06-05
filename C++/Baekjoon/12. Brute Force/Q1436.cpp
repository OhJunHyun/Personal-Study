#include <iostream>
#include <string>
using namespace std;

int find6(int n) {
	int s = 0, a = 665;
	string aa;
	while (1) {
		a++;
		aa = to_string(a);
		for (int i = 0; i < aa.length() - 2; i++) {
			if (aa[i] == '6' && aa[i + 1] == '6' && aa[i + 2] == '6') {
				s += 1;
				if (s == n) {
					return a;
				}
				break;
			}
		}
	}
}
int main() {
	int n;
	cin >> n;
	cout << find6(n);
	return 0;
}