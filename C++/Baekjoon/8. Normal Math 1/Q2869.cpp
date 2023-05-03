#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, v; //³·, ¹ã, ³ª¹« ³ôÀÌ
	cin >> a >> b >> v;
	int day=1;

	/*while (n < v) {
		n += a;
		if (n >= v) {
			day++;
			break;
		}
		else
			day++;
		n -= b;
	}*/

	/*for (day; n < v; day++) {
		n += a;
		if (n >= v) {
			day++;
			break;
		}
		n -= b;
	}*/

	day += ((v - a) / (a - b));
	if ((v - a) % (a - b) != 0)
		day++;
	if (a >= v)
		cout << "1";
	else
		cout << day;
	
	return 0;
}