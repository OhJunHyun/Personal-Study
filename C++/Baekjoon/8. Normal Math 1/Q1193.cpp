#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	//11 5/1
	int num, den;
	int line = 0, end = 0;
	while (n > end) {
		line += 1; // 5
		end += line;// 15
	}

	int diff = end - n; // 4
	if (line % 2 != 0)
	{
		den = line - diff; // 1
		num = diff + 1; //5
	}
	else {
		den = diff + 1;
		num = line - diff;
	}
	
	cout << num << "/" << den;
}