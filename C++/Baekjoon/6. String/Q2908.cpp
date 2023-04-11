#include<iostream>
using namespace std;

int main() {
	string n, m;
	cin >> n >> m;
	string tn="", tm = "";
	for (int i = 2; i >=0; i--) {
		tn += n[i];
		tm += m[i];
	}
	string result;
	if (tn > tm) 
		result = tn;
	else
		result = tm;

	cout << result;
}