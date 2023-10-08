#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, k;
	cin >> n >> k;
	vector<int> arr;
	queue<int> line;
	for (int i = 1; i <= n; i++) {
		line.push(i);
	}
	while (line.size() != 0) {
		for (int j = 0; j < k - 1; j++) {
			line.push(line.front());
			line.pop();
		}
		arr.push_back(line.front());
		line.pop();
	}
	cout << "<";
	for (int k = 0; k < arr.size()-1; k++) {
		cout << arr[k] << ", ";
	}

	cout << arr[arr.size() - 1] << ">";
	return 0;
}