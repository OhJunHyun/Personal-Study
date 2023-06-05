#include <iostream>
#include <vector>
using namespace std;

bool checkPrime(int a) {
	int p = a;
	for (int i = 2; i < a; i++) { 
		if (p % i == 0) { //���𰡿� ������ �������ٴ� ��
			return false;
		}
	}
	return true;
}

int main() {
	int m, n, sum = 0; //m���� n����
	cin >> m >> n;
	vector<int> prime;

	for (int i = m; i <= n; i++) {
		if (checkPrime(i) == true) {
			prime.push_back(i);
		}
	}

	for (int i = 0; i < prime.size(); i++) {
		if (prime[0] == 1) {
			prime.erase(prime.begin());
		}
		sum += prime[i];
		//cout << prime[i] << " ";
	}

	if (prime.size() != 0) {
		cout << sum << '\n' << prime[0];
	}
	else {
		cout << -1;
	}
	return 0;
}