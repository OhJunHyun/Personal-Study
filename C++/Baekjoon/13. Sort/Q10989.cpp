#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int arr[10001] = { 0 };
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr[a-1] += 1;
	}

	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i + 1 << '\n';
		}
	}

	/*int n, a;
	cin >> n;
	vector<int> arr;
	
	for (int i = 0; i < n; i++) {
		cin >> a;
		arr.push_back(a);
	}

	int max = arr[0];
	for (int i = 0; i < arr.size(); i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	vector<int> sortarr(max);

	for (int i = 0; i < arr.size(); i++) {
		sortarr[arr[i] - 1] += 1;
	}

	for (int i = 0; i < max; i++) {
		while(sortarr[i] != 0) {
			cout << i + 1 << '\n';
			sortarr[i] -= 1;
		}
		
	}*/
}