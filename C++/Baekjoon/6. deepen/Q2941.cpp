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
			idx = s.find(croatian[i]); //찾는 문자열의 첫 인덱스 자리
			if (idx == string::npos) //찾는 문자열이 없는 경우에는 string::npos를 반환
				break; //없을 때 반환 => 그냥 입력 값 그대로 세면 됨
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
		//2단으로 for 돌리면서 [i][j]가 'c', 'd'일 때, 다음걸 확인해보고 '=','-'면 cnt+=1 시키기
		//'l'과 'n' 뒤에 'j'가 와도 cnt+=1
		//'s'와 'z'가 오면 뒤 '='가 오는지 확인
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