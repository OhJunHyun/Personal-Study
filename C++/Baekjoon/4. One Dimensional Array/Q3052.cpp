#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> arr;

	for (int i = 0; i < 10; i++) {
		int n;
		cin >> n;
		arr.push_back(n);
	}

	vector<int> arr2(42);
	for (int j = 0; j < 10; j++) {
		int temp = arr[j] % 42;
		arr2[temp] += 1;
	}
	int cnt = 0;
	for (int k = 0; k < 42; k++) {
		if (arr2[k] != 0) {
			cnt += 1;
		}
	}
	cout << cnt;
}