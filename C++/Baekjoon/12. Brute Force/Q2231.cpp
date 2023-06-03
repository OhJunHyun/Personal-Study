#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, m, min = 0; //m의 분해합이 n일 경우 m은 n의 생성자
	cin >> n; //분해 합 = n과 n을 구성하는 자리수의 합
	
	//가장 작은 생성자(m) 구하기
	for (int i = 1; i <= n; i++) {
		min = 0;
		m = i;
		min += m;
		string c = to_string(m);
		for (int j = 0; j < c.length(); j++) {
			min += (m % 10);
			m /= 10;
		}
		//cout << min << '\n';
		if (min == n) {
			m = i;
			break;
		}
	}
	cout << m;
}