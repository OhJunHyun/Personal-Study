#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c, cir = 0; //cir = ตัทน
	cin >> a >> b >> c;
	vector<int> t;
	t.push_back(a);
	t.push_back(b);
	t.push_back(c);
	sort(t.begin(), t.end());

	if (t[0] == t[1] == t[2]) {
		cout << t[0] + t[1] + t[2];
	}
	else if (t[2] < t[0] + t[1]) {
		cout << t[0] + t[1] + t[2];
	}
	else {
		t[2] = (t[1] + t[0] - 1);
		cout << t[0] + t[1] + t[2];		
	}
	return 0;
}