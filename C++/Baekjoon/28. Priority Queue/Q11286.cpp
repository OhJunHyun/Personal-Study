//#include<iostream>
//#include<queue>
//#include<vector>
//using namespace std;
//
//struct comp {
//	bool operator()(int a, int b) {
//		if (abs(a) == abs(b)) {
//			return a > b;
//		}
//		else
//			return abs(a) > abs(b);
//	}
//};
//
//int main() {
//	vector<int> arr;
//	priority_queue<int, vector<int>,comp> q;
//	int n, a;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		if (a != 0) {
//			q.push(a);
//		}
//		else {
//			//절대값이 가장 작은 수를 빼야함
//			//중복 될 경우 abs 신경 쓰지 않고 가장 작은 수
//			if (q.empty()) {
//				arr.push_back(0);
//			}
//			else {
//				arr.push_back(q.top());
//				q.pop();	
//			}
//		}
//	}
//	for (int j = 0; j < arr.size(); j++) {
//		cout << arr[j] << '\n';
//	}
//}
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct comp {
	bool operator() (int a, int b) {
		if (abs(a) == abs(b)) {
			return a > b;
		}
		else {
			return abs(a) > abs(b);
		}
	}
};
int main() {
	vector<int> arr;
	priority_queue<int, vector<int>, comp> q;
	int n, a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a != 0) {
			q.push(a);
		}
		else {
			if (q.empty()) {
				arr.push_back(0);
			}
			else {
				arr.push_back(q.top());
				q.pop();
			}
		}
		
	}
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << '\n';
	}
}