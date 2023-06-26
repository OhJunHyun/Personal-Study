#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
	/*
	가로수의 위치는 기준점으로부터 떨어져 있는 거리로 표현
	ex) (1, 3, 7, 13)의 위치에 있다면 (5, 9, 11)에 더 심으면 간격이 같아짐
		(2, 6, 12, 18)의 위치에 있다면 (4, 8, 10, 14, 16)에 더 심어야 함
		4 6 6 -> 2
		2 4 6 -> 2
	심어져 있는 가로수의 위치가 주어질 때, 모든 가로수가 같은 간격이 되도록 새로 심어야 하는
	가로수의 최소수를 구하는 프로그램을 작성하라.
	*/
int gcd(int a, int b) {
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; //이미 심어져 있는 나무 수
	cin >> n;
	int tn,l, cnt = 0;//나무 위치
	vector<int> trees;
	vector<int> difs;//차이들
	for (int i = 0; i < n; i++) {
		cin >> tn;
		trees.emplace_back(tn);
	}
	sort(trees.begin(), trees.end());
	//입력 된 수들의 간격끼리의 최대 공약수를 구하기
	
	for (int i = 0; i < trees.size(); i++) {
		if (i != trees.size() - 1) {
			difs.emplace_back(trees[i + 1] - trees[i]);
		}
	}
	
	l = gcd(difs[0], difs[1]);
	for (int i = 2; i < difs.size(); i++) {
		l = gcd(l, difs[i]);
	}
	for (auto& i : difs) {
		cnt += i / l - 1;
	}
	/*for (int i = 0; i < difs.size() - 2; i++) {
		if (i != difs.size()) {
			l = gcd(gcd(difs[i], difs[i + 1]), difs[i + 2]);
			break;
		}
	}

	for (int i = 0; i < trees.size() - 1; i++) {
		if (trees[i] + l != trees[i + 1]) {
			cnt += 1;
			trees.emplace_back(trees[i] + l);
			sort(trees.begin(), trees.end());
		}
	}*/
	cout << cnt;
	return 0;
}