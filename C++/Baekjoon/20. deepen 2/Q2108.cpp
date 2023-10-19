#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int num1[8001] = { 0, };
vector<int> num2;
vector<int> maxs;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	bool second = false;
	int n, t, avg = 0 , cen, ran, most = -9999, fre = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		num2.push_back(t);
		num1[t + 4000]++;
		avg += t;
	}
	
	sort(num2.begin(), num2.end());
	avg = round((float)avg / n);
	cen = num2[num2.size() / 2];
	ran = num2[num2.size() - 1] - num2[0];
	for (int i = 0; i < 8001; i++) {
		if (num1[i] == 0) {
			continue;
		}
		if (num1[i] == most) {
			if (second) {
				fre = i - 4000;
				second = false;
			}
		}
		if (num1[i] > most) {
			most = num1[i];
			fre = i - 4000;
			second = true;
		}
	}

	cout << avg << '\n' << cen << '\n' << fre << '\n' << ran << '\n';
	return 0;
}