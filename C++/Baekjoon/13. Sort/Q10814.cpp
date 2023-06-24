#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Member {
public:
	int age = 0;
	int idx = 0;
	string name = "0";
	void setinfo(int _age, string _name, int _idx);

	bool operator < (Member &member) {
		if (this->age == member.age) {
			return this->idx < member.idx;
		}
		return this->age < member.age;
	}
};

void Member::setinfo(int _age, string _name, int _idx) {
	this->age = _age;
	this->name = _name;
	this->idx = _idx;
}

Member mem[100001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int a;//age
	string b;//name
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		mem[i].setinfo(a, b, i);
	}

	sort(mem, mem+n);

	for (int i = 0; i < n; i++) {
		cout << mem[i].age << " " << mem[i].name << '\n';
	}
}

//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//bool compare(vector<string> a, vector<string> b) {
//	if (a[0] < b[0]) {
//		return stoi(a[0]) < stoi(b[0]);
//	}
//	return 0;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, age;
//	string name;
//	cin >> n;
//
//	vector<vector<string>> member(n, vector<string>(2));
//	for (int i = 0; i < n; i++) {
//		cin >> age >> name;
//		member[i][0] = to_string(age);
//		member[i][1] = name;
//	}
//
//	sort(member.begin(), member.end(), compare);
//
//	for (int i = 0; i < n; i++) {
//		cout << member[i][0] << " " << member[i][1] << '\n';
//	}
//	
//	return 0;
//}