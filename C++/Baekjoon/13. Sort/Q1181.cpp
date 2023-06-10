#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, cnt = 0;
	cin >> n;
	vector<string> words;

	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;
		if (find(words.begin(), words.end(), word) == words.end()) {
			cnt += 1;
			words.push_back(word);
		}
	}
	
	sort(words.begin(), words.end(), compare);

	for (int i = 0; i < cnt; i++) {
		cout << words[i] << '\n';
	}
	return 0;
}

/*vector<vector<string>> w_len(n, vector<string>(2, "0"));
	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;
		w_len[i][0] = to_string(word.length());
		w_len[i][1] = word;
	}
	sort(w_len.begin(), w_len.end());

	w_len.erase(unique(w_len.begin(), w_len.end()), w_len.end());
	for (int i = 0; i < w_len.size(); i++) {
		cout << w_len[i][1] << '\n';
	}*/
//----------------------------------------------
/*cout << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cout << w_len[i][j] <<" ";
		}
		cout << endl;

	}
	sort(w_len.begin(), w_len.end());
	cout << endl;*/
	/*vector<string> temp;
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			if (w_len[j][0] > w_len[j + 1][0]) {
				temp = w_len[j];
				w_len[j] = w_len[j + 1];
				w_len[j + 1] = temp;
			}
			if (w_len[j][0] == w_len[j + 1][0]) {
				if (w_len[j][1] > w_len[j + 1][1]) {
					temp = w_len[j];
					w_len[j] = w_len[j + 1];
					w_len[j + 1] = temp;
				}
			}
		}
	}*/

	//w_len을 길이로 정렬을 했으니 [i][1]의 순서로 다시 정렬
	/*for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			if (w_len[j][0] == w_len[j + 1][0]) {
				if (w_len[j][1] > w_len[j + 1][1]) {
					temp = w_len[j];
					w_len[j] = w_len[j + 1];
					w_len[j + 1] = temp;
				}
			}
		}
	}*/