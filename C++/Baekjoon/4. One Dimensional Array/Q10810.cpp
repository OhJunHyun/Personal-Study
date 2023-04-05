#include <iostream>
#include <vector>
using namespace std;

int N, M;
int basket[101];

int main() {
	cin >> N >> M;
	
	while(M--){
		int i, j, k;
		cin >> i >> j >> k;
		for (int l = i; l <= j; l++) {
			basket[l] = k;
		}
	}

	for (int m = 1; m <= N; m++) {
		cout<<basket[m]<< " ";
	}
	return 0;
}