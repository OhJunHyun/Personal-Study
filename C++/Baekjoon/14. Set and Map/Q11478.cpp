#include <iostream>
#include <string>
#include <set>
using namespace std;

//string slice(string a, int n, int m) {//n부터 m까지
//	string temp = "";
//	for (int i = n; i < m; i++) {
//		temp += to_string(a[i]);
//	}
//	return temp;
//}
//
//int main() {
//	string word;
//	cin >> word;
//
//	set<string> pwords;//부분 문자열
//	string temp="";
//	for (int i = 0; i < word.size(); i++) {
//		for (int j = i+1; j <= word.size(); j++) {
//			pwords.insert(slice(word, i, j));
//		}
//	}
//	
//	cout << pwords.size();
//}

int main() {
	string word;
	cin >> word;

	set<string> pwords;

	string temp = "";
	for (int i = 0; i < word.size(); i++) {
		for (int j = i; j < word.size(); j++) {
			temp += word[j];
			pwords.insert(temp);
		}
		temp = "";
	}
	cout << pwords.size();
}