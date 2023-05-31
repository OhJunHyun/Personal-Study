#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n; //점의 개수
	cin >> n;
	int x, y;
	//vector<int> ter;
	vector<int> terx;
	vector<int> tery;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		terx.push_back(x);
		tery.push_back(y);
	}

	sort(terx.begin(), terx.end());
	sort(tery.begin(), tery.end());

	cout << (terx[terx.size() - 1] - terx[0]) * (tery[tery.size() - 1] - tery[0]);
}