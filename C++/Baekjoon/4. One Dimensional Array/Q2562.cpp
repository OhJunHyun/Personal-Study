#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> arr1;
	vector<int> arr2;
	for (int i = 0; i < 9; i++) {
		int num;
		cin >> num;
		arr1.push_back(num);
		arr2.push_back(num);
	}
	sort(arr1.begin(), arr1.end());
	int max = arr1[arr1.size() - 1];

	for (int j = 0; j < 9; j++) {
		if (arr2[j] == max) {
			cout << max << "\n";
			cout << j+1;
		}
	}
	return 0;
}