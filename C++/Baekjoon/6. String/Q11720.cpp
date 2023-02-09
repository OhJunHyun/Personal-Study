#include <iostream>
#include <string>
using namespace std;

int main() {
	int test;
	cin >> test;
	string nums;
	cin >> nums;
	int result = 0;
	for (int i = 0; i < test; i++) {
		result += (nums[i] - 48);
	}
	cout << result << endl;
	return 0;
}