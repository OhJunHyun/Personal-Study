#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	//n층의 정육면제에서 내려올 수 있는 길의 개수
	cout << pow(2, n);
}