#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, x;
	cin >> n;
	
	vector<int> cor;//���� ��
	for (int i = 0; i < n; i++) {
		cin >> x;
		cor.push_back(x);
	}
	vector<int> copycor(cor);//���� ��

	sort(copycor.begin(), copycor.end());
	copycor.erase(unique(copycor.begin(), copycor.end()), copycor.end());

	//�ߺ� ���� cor2�� ���� cor1�� ���� ���ϸ� cor2[i]�� ���� cor1[j]�� ���� ��ġ�ϸ� i�� ����
	// �� �ð� �ʰ�
	/*for (int i = 0; i < cor.size(); i++) {
		for (int j = 0; j < copycor.size(); j++) {
			if (cor[i] == copycor[j]) {
				copycor[j] = i;
			}
		}
	}*/

	for (int i = 0; i < n; i++) {
		auto it = lower_bound(copycor.begin(), copycor.end(), cor[i]);
		//it�� ó�� �Է¹��� cor[i]�� ��, copycor�� -10���� �ߺ� ���� ���ĵ� ����
		cout << it - copycor.begin() << " ";
	}
	return 0;
}