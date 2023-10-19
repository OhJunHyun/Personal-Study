//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//bool compare(const pair<string, int>& a, const pair<string, int>& b) {
//	if (a.second == b.second) {
//		return a.first.length() > b.first.length();
//	}
//	return a.second > b.second;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	vector<string>words;
//	vector<pair<string, int>>wordbook;
//	
//	int n, m, idx = 0;
//	cin >> n >> m;
//
//	while (n--){
//		string word;
//		cin >> word;
//		if (word.size() < m) {
//			continue;
//		}
//		if (words.empty()) {
//			words.push_back(word);
//			wordbook.push_back({ word, 1 });
//		}
//		else {
//			if (find(words.begin(), words.end(), word) == words.end()) {
//				words.push_back(word);
//				wordbook.push_back({ word, 1 });
//				
//			}
//			else {
//				for (int j = 0; j < wordbook.size(); j++) {
//					if (wordbook[j].first == word) {
//						idx = j;
//					}
//				}
//				wordbook[idx].second++;
//			}
//		}
//	}
//	sort(wordbook.begin(), wordbook.end(), compare);
//	for (int i = 0; i < wordbook.size(); i++) {
//		cout << wordbook[i].first << '\n';
//	}
//	return 0;
//}

#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;

bool compare(const pair<string, int>& a, const pair<string, int>& b) {
	if (a.second == b.second) {
		if (a.first.length() == b.first.length()) {
			return a.first < b.first;
		}
		return a.first.length() > b.first.length();
	}
	return a.second > b.second;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unordered_map<string, int> words;
	int n, m;
	cin >> n >> m;

	while (n--) {
		string word;
		cin >> word;
		if (word.length() >= m) {
			words[word]++;
		}
	}
	vector<pair<string, int>>wordbook(words.begin(), words.end());
	sort(wordbook.begin(), wordbook.end(), compare);
	
	for (auto i : wordbook) {
		cout << i.first << '\n';
	}
}
