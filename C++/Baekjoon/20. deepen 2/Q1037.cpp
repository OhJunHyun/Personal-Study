#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n, t; 
	cin >> n;
	vector<int> d;//d´Â ¾à¼ö
	for (int i = 0; i < n; i++) {
		cin >> t;
		d.push_back(t);
	}
	sort(d.begin(), d.end());

	cout << d[0] * d[d.size()-1];
}