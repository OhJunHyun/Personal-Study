#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
	vector<int> arr;
	priority_queue<int> q;
	int n, a;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a != 0) {
			q.push(a);
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
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << '\n';
	}
	return 0;
}