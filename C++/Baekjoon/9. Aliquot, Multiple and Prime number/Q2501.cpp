#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num, k, data = 0;//숫자, 순서
	cin >> num >> k;

	vector<int> factor;
	if (num >= k) {
		for (int i = 1; i <= num; i++) {
			if (num % i == 0) {
				factor.push_back(i);
			}
		}
		try {
			data=factor.at(k-1);
		}
		catch(std::out_of_range& e) {
		}
		
		cout << data;
	}
	else {
		cout << "입력 오류";
	}
	
}