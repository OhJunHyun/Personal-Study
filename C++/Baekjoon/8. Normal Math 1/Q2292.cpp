#include <iostream>
using namespace std;

int main() {
	int cnt = 1;
	int n, rnd = 1; //rnd = �ѷ�
	cin >> n;
	
	while (n>rnd) {
		rnd += (6 * cnt);
		cnt += 1;
	}
	cout << cnt;
}