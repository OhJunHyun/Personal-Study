#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string n;
	cin >> n;
	vector<char> arr;
	for (int i = 0; i < n.length(); i++) {
		arr.push_back(n[i]);
	}
	sort(arr.begin(), arr.end());

	for (int i = arr.size() - 1; i >= 0; i--) {
		cout << arr[i];
	}
}