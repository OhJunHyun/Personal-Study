#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
	/*
	���μ��� ��ġ�� ���������κ��� ������ �ִ� �Ÿ��� ǥ��
	ex) (1, 3, 7, 13)�� ��ġ�� �ִٸ� (5, 9, 11)�� �� ������ ������ ������
		(2, 6, 12, 18)�� ��ġ�� �ִٸ� (4, 8, 10, 14, 16)�� �� �ɾ�� ��
		4 6 6 -> 2
		2 4 6 -> 2
	�ɾ��� �ִ� ���μ��� ��ġ�� �־��� ��, ��� ���μ��� ���� ������ �ǵ��� ���� �ɾ�� �ϴ�
	���μ��� �ּҼ��� ���ϴ� ���α׷��� �ۼ��϶�.
	*/
int gcd(int a, int b) {
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; //�̹� �ɾ��� �ִ� ���� ��
	cin >> n;
	int tn,l, cnt = 0;//���� ��ġ
	vector<int> trees;
	vector<int> difs;//���̵�
	for (int i = 0; i < n; i++) {
		cin >> tn;
		trees.emplace_back(tn);
	}
	sort(trees.begin(), trees.end());
	//�Է� �� ������ ���ݳ����� �ִ� ������� ���ϱ�
	
	for (int i = 0; i < trees.size(); i++) {
		if (i != trees.size() - 1) {
			difs.emplace_back(trees[i + 1] - trees[i]);
		}
	}
	
	l = gcd(difs[0], difs[1]);
	for (int i = 2; i < difs.size(); i++) {
		l = gcd(l, difs[i]);
	}
	for (auto& i : difs) {
		cnt += i / l - 1;
	}
	/*for (int i = 0; i < difs.size() - 2; i++) {
		if (i != difs.size()) {
			l = gcd(gcd(difs[i], difs[i + 1]), difs[i + 2]);
			break;
		}
	}

	for (int i = 0; i < trees.size() - 1; i++) {
		if (trees[i] + l != trees[i + 1]) {
			cnt += 1;
			trees.emplace_back(trees[i] + l);
			sort(trees.begin(), trees.end());
		}
	}*/
	cout << cnt;
	return 0;
}