#include <iostream>
using namespace std;

void Selectionsort(int arr[], int size, int price) {
	// ���� ����: ���� ���� ���� i��°�� �����鼭 �ڸ��� �ٲ�
	int p = 0, temp;
	int sum = 0, mid = 0;
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

	cout << arr[size -  price];
}

int main() {
	int a, b, n;
	int num[1000];
	cin >> n; //������ ��
	cin >> b; //������ ��
	for (int i = 0; i < n; i++) {
		cin >> a;
		num[i] = a;
	}
	Selectionsort(num, n, b);
}