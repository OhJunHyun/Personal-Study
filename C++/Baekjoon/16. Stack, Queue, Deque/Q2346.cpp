//#include<iostream>
//#include<deque>
//#include<vector>
//using namespace std;
//
//int main() {
//	vector<int> ans; //¡§¥‰ - 1 4 5 3 2
//	vector<int> x;   //«≥º± ≥ª ¡æ¿Ã 3 2 1 -3 -1
//	deque<int> bal;  //«≥º± 1 2 3 4 5
//	int n, temp;
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		bal.push_back(i + 1); // 1 2 3 4 5
//		cin >> temp;
//		x.push_back(temp);
//	}
//
//	while (!bal.empty()) {
//		ans.push_back(bal.front());
//		int xx = x[bal.front() - 1] > 0 ? x[bal.front() - 1] - 1 : (bal.size() - 1) + (x[bal.front() - 1]);
//		
//		bal.pop_front();
//	
//		if (xx == 0 || bal.empty()) {
//			continue;
//		}
//		else {
//			for (int j = 0; j < xx; j++) {
//				bal.push_back(bal.front());
//				bal.pop_front();
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		cout << ans[i] << " ";
//	}
//	return 0;
//}

#include<iostream>
#include<deque>
#include<vector>
#include<cmath>
using namespace std;

int main() {
	deque<int> bal;
	vector<int> x;
	int n, temp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		x.push_back(temp);
		bal.push_back(i + 1);
	}

	while (!bal.empty()) {
		int xx = x[bal.front() - 1];//3 2 1 -3 -1
		//1 2 3 4 5   4 5 2 3   5 2 3   3 2
		cout << bal.front()<<" ";
		bal.pop_front();

		if (bal.empty()) {
			break;
		}
		if (xx > 0) {
			for (int i = 0; i < xx - 1; i++) {
				bal.push_back(bal.front());
				bal.pop_front();
			}
		}
		else {
			for (int i = 0; i < abs(xx); i++) {
				bal.push_front(bal.back());
				bal.pop_back();
			}
		}
	}
	return 0;
}