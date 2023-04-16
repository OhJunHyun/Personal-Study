#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
	int tc, n, score;
	cin >> tc;
	int scores[1000];

	for (int i = 0; i < tc; i++) {
		float avg = 0;
		int sum = 0;
		float temp = 0;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> score;
			scores[j] = score;
			sum += scores[j];
		}
		avg = sum / n;

		for (int k = 0; k < n; k++) {
			if (scores[k] > avg) {
				temp += 1;
			}
		}
		printf("%.3f%%\n", temp / n * 100);
	}
}