#include<iostream>
#include<cmath>
using namespace std;
#define MAX 1000000

int arr[MAX + 1]{ 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	for (int i = 2; i <= MAX; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= sqrt(MAX); i++) {
		if (arr[i] == 0) {
			continue;
		}
		for (int j = i * i; j <= MAX; j += i) {
			arr[j] = 0;
		}
		//소수만 남기고 0으로 바꾸기
	}

	int tc, n, cnt = 0;
	cin >> tc;
	while (tc--) {
		cin >> n;
		for (int i = 2; i < n; i++) {
			if (arr[n - i] + arr[i] == n) {
				cnt++;
				if (n - i == i) {
					cnt++;
				}
			}
		}
		cout << cnt / 2 << '\n';
		cnt = 0;
	}
	return 0;
}