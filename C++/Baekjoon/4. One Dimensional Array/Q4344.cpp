#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int C;
	cin >> C;

	for (int i = 0; i < C; i++) {
		vector<float> scores;
		float sum = 0;
		float cnt = 0;
		float avg = 0;
		float result = 0;
		float score;
		int n;
		cin >> n;

		for (int j = 0; j < n; j++) {
			cin >> score;
			scores.push_back(score);
			sum += scores[j];
		}
		avg = sum / n;
		for (int k = 0; k < n; k++) {
			if (scores[k] > avg) {
				cnt += 1;
			}
		}
		result = (cnt / n) * 100;

		cout << fixed;
		cout.precision(3);
		cout << result << "%" << "\n";
	}
}