#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> chess = { 1,1,2,2,2,8 };
	vector<int> n;
	int num;
	for (int i = 0; i < 6; i++) {
		cin >> num;
		n.push_back(num);
	}

	for (int j = 0; j < 6; j++) {
		cout << chess[j] - n[j] << " ";
	}

}