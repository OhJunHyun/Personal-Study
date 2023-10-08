#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; // �ο� ��
	cin >> n;

	queue<int> stra; //ó�� �� �ִ� ��
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		stra.push(temp);
	}
	//������� ó�� ���� 5 4 1 3 2�� ���� �Է���

	int idx = 1; //����ǥ
	stack<int> left;

	bool rec = true;//�޳ĸ���
	
	while (!stra.empty() || !left.empty()) {
		//���ͳ� ����...��
		int s = (stra.empty()) ? -1 : stra.front();
		int l = (left.empty()) ? -1 : left.top();

		if (s > 0 && s == idx) { //�˸��� ������ stra�ٿ��� ���� ��
			stra.pop();
			idx++;
			continue;
		}
		if (l > 0 && l == idx) { //�˸��� ������ �ٲ� ��(left)�� ���� ��
			left.pop();
			idx++;
			continue;
		}

		if (s > 0 && s != idx) { // stra���� �ٷ� �������� left�� �Ѱܾ���.
								 // �׷��� left�� �Ѱ������� left�� stra���� ������ ������
			if (l > 0 && l < s) {
				rec = false; //��� �޴� ���� �Ұ���
				break;
			}
			// ���� ��Ȳ�� �ƴ϶�� ����
			left.push(s);
			stra.pop();
		}
	}
	if (rec) {
		cout << "Nice" << '\n';
	}
	else {
		cout << "Sad" << '\n';
	}
	return 0;
}