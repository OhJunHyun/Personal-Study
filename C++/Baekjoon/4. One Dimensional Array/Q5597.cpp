#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> pres;
	for (int i = 0; i < 28; i++) {
		int num;
		cin >> num;
		pres.push_back(num);
	}
	sort(pres.begin(), pres.end());

	vector<int> pres2(30);
	for (int j = 0; j < 30; j++) {
		pres2[j] = 0;
	}

	for (int k = 0; k < 28; k++) {
		pres2[pres[k]-1] = 1;
	}
	
	for (int l = 0; l < 30; l++) {
		if (pres2[l] == 0) {
			cout << l+1 << "\n";
		}
	}

	return 0;
}