#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int front, end, newnum;
	int cycle = 0;
	if (num >= 10) {
		front = num / 10;
		end = num % 10;
		newnum = (end * 10) + ((front + end) % 10);
		cycle += 1;
		while (newnum != num) {
			front = newnum / 10;
			end = newnum % 10;
			newnum = (end * 10) + ((front + end) % 10);
			cycle += 1;
		}
		cout << cycle;
	}
	else if (num < 10 && num > 0) {
		front = num;
		end = num;
		cycle += 2;
		newnum = (end * 10) + ((front + end) % 10);
		while (newnum != num) {
			front = newnum / 10;
			end = newnum % 10;
			newnum = (end * 10) + ((front + end) % 10);
			cycle += 1;
		}
		cout << cycle;
	}
	else {
		cout << 1;
	}
}