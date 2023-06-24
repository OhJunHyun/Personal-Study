#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<string> nl;//듣도 못한
	vector<string> nw;//보도 못한
	vector<string> nlw;//듣도 보도 못한
	int n, m, cnt = 0;
	string p;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> p;
		nl.push_back(p);
	}
	for (int i = 0; i < m; i++) {
		cin >> p;
		nw.push_back(p);
	}
	sort(nl.begin(), nl.end());
	sort(nw.begin(), nw.end());

	for (int i = 0; i < m; i++) {
		auto a = upper_bound(nl.begin(), nl.end(), nw[i]) - lower_bound(nl.begin(), nl.end(), nw[i]);
		if (a) {
			nlw.push_back(nw[i]);
		}
	}
	//두 명단에 공통적으로 있는 사람만 출력
	cout << nlw.size() << '\n';
	for (int i = 0; i < nlw.size(); i++) {
		cout << nlw[i] << '\n';
	}
	return 0;
}