#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {
	vector<int> arr;
	priority_queue<int> q;
	
	int n, a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a != 0) {
			q.push(-1*a);
		}
		else {
			if (q.empty()) {
				arr.push_back(0);
			}
			else {
				arr.push_back(q.top());
				q.pop();
			}
		}
	}
	for (int j = 0; j < arr.size(); j++) {
		cout << -1*arr[j] << '\n';
	}
	return 0;
}