#include <iostream>
#include <vector>
using namespace std;

int main() { 
	int Quater = 25;
	int Dime = 10;
	int Nickel = 5;
	int Penny = 1;

	int Q = 0, D = 0, N = 0, P = 0;
	int ts;
	cin >> ts;
	vector<int> c;
	for (int i = 0; i < ts; i++) {
		int cent;
		cin >> cent;
		c.push_back(cent);
		
		Q = c[i] / Quater;
		D = (c[i] % Quater) / Dime;
		N = (c[i] % Quater % Dime) / Nickel;
		P = (c[i] % Nickel) / Penny;
		cout << Q << " " << D << " " << N << " " << P << endl;
	}
}