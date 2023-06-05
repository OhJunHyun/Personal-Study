#include <iostream>
using namespace std;

int main() {
	//첫 번째 숫자가 두 번째 숫자의 약수라면 factor
	//첫 번째 숫자가 두 번째 숫자의 배수라면 multiple
	//둘 다 아니라면 neither
	int a, b;
	
	while (1) {
		cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}

		if (b % a == 0) {
			cout << "factor" << '\n';
		}
		else if (a % b == 0 && a / b != 0) {
			cout << "multiple" << '\n';
		}
		else cout << "neither" << '\n';
		
		
	}
}