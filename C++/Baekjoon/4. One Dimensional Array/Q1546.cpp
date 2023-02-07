#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int test;
	cin >> test;

	vector<float> scores;
	
	for (int i = 0; i < test; i++) {
		float score;
		cin >> score;
		scores.push_back(score);
	}

	sort(scores.begin(), scores.end());
	
	float M = scores[test-1];
	
	vector<float> new_scores;
	float avg = 0;
	
	for (int j = 0; j < test; j++) {
		new_scores.push_back(scores[j] / M * 100);
		avg += new_scores[j];
	}
	cout.precision(3);
	cout << avg / test;

	return 0;
}