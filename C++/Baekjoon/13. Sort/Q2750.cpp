#include <iostream>
using namespace std;

void Selectionsort(int arr[], int size) {
	// 선택 정렬: 가장 작은 수를 i번째에 넣으면서 자리를 바꿈
	int p = 0, temp;
	for (int i = p; i < size; i++, p++) {
		int min = arr[p];
		int minpos = p;
		for (int j = p; j < size; j++) {
			if (min > arr[j]) {
				min = arr[j];
				minpos = j;
			}
		}
		temp = arr[p];
		arr[p] = arr[minpos];
		arr[minpos] = temp;
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << '\n';
	}
}

int main() {
	int n, a;
	cin >> n;
	
	int num[1000];
	for (int i = 0; i < n; i++) {
		cin >> a;
		num[i] = a;
	}
	Selectionsort(num, n);
}