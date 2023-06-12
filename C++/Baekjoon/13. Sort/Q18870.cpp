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
	
	vector<int> cor;//정렬 후
	for (int i = 0; i < n; i++) {
		cin >> x;
		cor.push_back(x);
	}
	vector<int> copycor(cor);//정렬 전

	sort(copycor.begin(), copycor.end());
	copycor.erase(unique(copycor.begin(), copycor.end()), copycor.end());

	//중복 없는 cor2의 값과 cor1의 값을 비교하며 cor2[i]의 값과 cor1[j]의 값이 일치하면 i로 설정
	// ㄴ 시간 초과
	/*for (int i = 0; i < cor.size(); i++) {
		for (int j = 0; j < copycor.size(); j++) {
			if (cor[i] == copycor[j]) {
				copycor[j] = i;
			}
		}
	}*/

	for (int i = 0; i < n; i++) {
		auto it = lower_bound(copycor.begin(), copycor.end(), cor[i]);
		//it는 처음 입력받은 cor[i]의 값, copycor은 -10부터 중복 없이 정렬된 벡터
		cout << it - copycor.begin() << " ";
	}
	return 0;
}