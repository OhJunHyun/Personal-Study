#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a, b;
	cin >> a >> b;
	int cnt1, cnt2; //자릿수 저장
	vector<int> aa; //자릿 수 더 큼
	vector<int> bb; //자릿 수 더 작음
	vector<int> sumab;
	cnt1 = a.length();
	cnt2 = b.length();
	// 벡터로 만든 후 자릿수 통일 시키기
	for (int i = cnt1 - 1; i >= 0; i--) {
		aa.push_back(a[i] - 48);
	}
	for (int i = cnt2 - 1; i >= 0; i--) {
		bb.push_back(b[i] - 48);
	}
	if (cnt1 > cnt2) {
		for (int i = 0; i < cnt1 - cnt2; i++) {
			bb.push_back(0);
		}
	}
	else if(cnt2 > cnt1) {
		for (int i = 0; i < cnt2 - cnt1; i++) {
			aa.push_back(0);
		}
	}

	int i = 0, j = 0;
	while (i < aa.size() || j < bb.size()) {
		sumab.push_back((aa[i] + bb[j]));
		i += 1;
		j += 1;
	}

	for (int i = 0; i < sumab.size(); i++) {
		if (i!= sumab.size()-1 && sumab[i] >= 10) {
			sumab[i] = sumab[i] % 10;
			sumab[i + 1] += 1;
		}

	}
	reverse(sumab.begin(), sumab.end());
	for (int i = 0; i < sumab.size(); i++) {
		cout << sumab[i];
	}
	return 0;
}