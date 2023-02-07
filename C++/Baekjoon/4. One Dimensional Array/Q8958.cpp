#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test;
	cin >> test;
	vector<string> arr;
	int score = 0;
	int sum = 0;

	for (int i = 0; i < test; i++) {
		string ox;
		cin >> ox;
		arr.push_back(ox);

		for (int j = 0; j < arr[i].size(); j++) {
			if (arr[i][j] == 'O') {
				score += 1;
				sum += score;
			}
			if (arr[i][j] == 'X') {
				score = 0;
			}
		}
		cout << sum << "\n";
		sum = 0;
		score = 0;
	}
	return 0;	
}