#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num;
	cin >> num;
	vector<int> arr;
	int a;
	for (int i = 0; i < num; i++) {
		cin >> a;
		arr.push_back(a);
	}
	int v;
	cin >> v;
	int n = 0;
	for (int j = 0; j < arr.size(); j++) {
		if (arr[j] == v)
			n += 1;
	}
	cout << n;
}