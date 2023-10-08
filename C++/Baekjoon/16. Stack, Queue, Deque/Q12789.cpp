#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; // 인원 수
	cin >> n;

	queue<int> stra; //처음 서 있는 줄
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		stra.push(temp);
	}
	//여기까지 처음 서는 5 4 1 3 2의 줄을 입력함

	int idx = 1; //순서표
	stack<int> left;

	bool rec = true;//받냐마냐
	
	while (!stra.empty() || !left.empty()) {
		//인터넷 참고...ㅎ
		int s = (stra.empty()) ? -1 : stra.front();
		int l = (left.empty()) ? -1 : left.top();

		if (s > 0 && s == idx) { //알맞은 순서가 stra줄에서 왔을 때
			stra.pop();
			idx++;
			continue;
		}
		if (l > 0 && l == idx) { //알맞은 순서가 바꾼 줄(left)에 왔을 때
			left.pop();
			idx++;
			continue;
		}

		if (s > 0 && s != idx) { // stra에서 바로 못받으면 left로 넘겨야함.
								 // 그런데 left로 넘겼음에도 left가 stra보다 작으면 실패임
			if (l > 0 && l < s) {
				rec = false; //모두 받는 것은 불가능
				break;
			}
			// 위의 상황이 아니라면 성공
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