#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, m, min = 0; //m�� �������� n�� ��� m�� n�� ������
	cin >> n; //���� �� = n�� n�� �����ϴ� �ڸ����� ��
	
	//���� ���� ������(m) ���ϱ�
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