#include<iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> croatian{ "c=", "c-", "dz=", "d-", "lj", "nj", "s=","z=" };
	int idx;
	string s;
	cin >> s;
	for (int i = 0; i < croatian.size(); i++) {
		while (1) {
			idx = s.find(croatian[i]); //ã�� ���ڿ��� ù �ε��� �ڸ�
			if (idx == string::npos) //ã�� ���ڿ��� ���� ��쿡�� string::npos�� ��ȯ
				break; //���� �� ��ȯ => �׳� �Է� �� �״�� ���� ��
			s.replace(idx, croatian[i].length(), "#");
		}
	}
	cout << s.length();
}
/*int main() {
	int cnt = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		//2������ for �����鼭 [i][j]�� 'c', 'd'�� ��, ������ Ȯ���غ��� '=','-'�� cnt+=1 ��Ű��
		//'l'�� 'n' �ڿ� 'j'�� �͵� cnt+=1
		//'s'�� 'z'�� ���� �� '='�� ������ Ȯ��
		if (s[i] == 'c') {
			if (s[i + 1] == '-' || s[i + 1] == '=') {
				cnt += 1;
				i++;
			}
			else {
				cnt += 1;
			}
		}
		else if (s[i] == 'd') {
			if (s[i + 1] == '-') {
				cnt += 1;
				i++;
			}
			else if (s[i + 1] == 'z' && s[i + 2] == '=') {
				cnt += 1;
				i += 2;
			}
			else {
				cnt += 1;
			}
		}
		else if (s[i] == 'l') {
			if (s[i + 1] == 'j') {
				cnt += 1;
				i++;
			}
			else {
				cnt += 1;
			}
		}
		else if (s[i] == 'n') {
			if (s[i + 1] == 'j') {
				cnt += 1;
				i++;
			}
			else
				cnt += 1;
		}
		else if (s[i] == 's') {
			if (s[i + 1] == '=') {
				cnt += 1;
				i++;
			}
			else
				cnt += 1;
		}
		else if (s[i] == 'z') {
			if (s[i + 1] == '=') {
				cnt += 1;
				i++;
			}
			else
				cnt += 1;
		}
		else {
			cnt += 1;;
		}
	}
	cout << cnt;
}*/