#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	vector<int> dis;

	dis.push_back(x);
	dis.push_back(y);
	dis.push_back(w - x);
	dis.push_back(h - y);

	sort(dis.begin(), dis.end());

	cout << dis[0];

	/*int distance = x;
	if (w - x < distance)
		distance = w - x;
	if (y < distance)
		distance = y;
	if (h - y < distance) {
		distance = h - y;
	}
	cout << distance;*/

}