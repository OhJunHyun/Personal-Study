#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main() {
	set<int> setA;
	set<int> setB;
	set<int> setC;
	set<int> setD;
	set<int> setE;
	int n, m, a;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a;
		setA.insert(a);
	}
	for (int i = 0; i < m; i++) {
		cin >> a;
		setB.insert(a);
	}

	set_difference(setA.begin(), setA.end(), setB.begin(), setB.end(), inserter(setC,setC.begin()));
	for (set<int>::iterator iter = setC.begin(); iter != setC.end(); iter++) {
		//cout << *iter << " ";
		setE.insert(*iter);
	}
	set_difference(setB.begin(), setB.end(), setA.begin(), setA.end(), inserter(setD, setD.begin()));
	for (set<int>::iterator iter = setD.begin(); iter != setD.end(); iter++) {
		//cout << *iter << " ";
		setE.insert(*iter);
	}
	cout << setE.size();
}