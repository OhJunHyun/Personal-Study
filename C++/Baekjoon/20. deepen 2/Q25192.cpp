#include<iostream>
#include<set>
using namespace std;

int main() {
	set<string> names;
	string name;
	int n, cnt = 0;
	cin >> n;
	while (n--) {
		cin >> name;
		if (name == "ENTER") {
			//cout << names.size() << endl;
			cnt += names.size();
			names.clear();
			continue;
		}
		names.insert(name);
	}
	cnt += names.size();
	cout << cnt;
}