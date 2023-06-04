#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a, b;
	a = n / 5;
	while (1) {
		if (a < 0) {
			cout << -1;
			return 0;
		}

		if ((n - (5 * a)) % 3 == 0) {
			b = (n - (5 * a)) / 3;
			break;
		}
		a--;
	}
	cout << a + b;
}


//n 킬로그램을 배달 해야함. 3/5키로의 봉투에 나눠서 포장이됨
	//최대한 적은 봉지를 가져갈 건데, 3-6보다 5-3+3-1이 더 적음
	//n키로를 배달해야할 때 봉지를 몇 개를 가져가면 되는지 그 최소의 수
	//정확하게 n키로가 안되면 -1 출력

	//int cnt3 = 0, cnt5 = 0, result = 0;
	//------------------------------시도 1----------------------------------
	//5가 많을 수록 확실히 개수가 줄어듦. n을 5로 나누고 나머지가 3으로 나누어 떨어지면 됨
	//while (1) {
	//	//n = 18
	//	result = n / 5; //3
	//	cnt5 += result;
	//	if (result == 0) { //n이 5보다 작을 때
	//		cout << -1;
	//		break;
	//	}
	//	else if (result >= 1) {//n이 5보다 클 때
	//		result /= 3;
	//		cnt3 += result;
	//		if (result == 0) {
	//			cout << -1;
	//			break;
	//		}
	//		else {
	//			cout << cnt5 + cnt3;
	//			break;
	//		}
	//	}
	//}
	////cout << n / 5;
	// 
	//--------------------------시도 2--------------------------------
	//n을 5와 3으로 골고루 나눈 값들 중 최소값을 해야하나
	//그럼 n /= 3과 n/= 5를 해서 나오는 값을 내야겠구만
	//if (n % 5 == 0 && n % 3 == 0) { //3과 5의 최소공배수
	//	result = n / 5;
	//	cout << "1" << "\n";
	//	cout << result;
	//}
	//else if (n % 5 == 0 && n % 3 != 0) { //5의 배수
	//	result = n / 5;
	//	cout << "2" << "\n";
	//	cout << result;
	//}
	//else if (n % 5 != 0 && (n % 5) % 3 == 0 && n >= 5) { //n을 5로 나눈 나머지가 3의 배수
	//	while (n > 0) {
	//		n -= 5;
	//		result++;
	//		if (n <= 0) {
	//			break;
	//		}
	//		if ((n % 3 == 0) && (n%5!=0)) {
	//			result += n / 3;
	//			cout << "case: 3" << '\n';
	//			cout << result;
	//			break;
	//		}
	//	}
	//}
	//else if (n % 5 != 0 && n % 3 == 0) { //3의 배수로 나누어 떨어질 때
	//	result = n / 3;
	//	cout << "4" << "\n";
	//	cout << result;
	//}
	//else if (n < 5 || ((n%5)%3!=0 && (n%3)%5!=0)) { //나누어 떨어지지 않을 때
	//	cout << "5" << "\n";
	//	cout << -1;
	//}
	// 
	//-------------------------시도 3-----------------------------
	/*while (1) {
		if (n % 5 != 0 && n % 3 == 0 && n < 10) {
			cout << n / 3;
			break;
		}
		else {
			n -= 5;
			if (n < 0) {
				break;
			}
			else {
				cnt5++;
				if (n % 3 == 0 && (n % 5 != 0)) {
					cnt3 += (n / 3);
					cout << cnt3 + cnt5;
					break;
				}

				if (n % 5 != 0 && n % 3 != 0 || n < 5) {
					cout << -1;
					break;
				}
			}

		}*/



		/*if (n % 3 == 0) {
			n -= 3;
			cnt3++;
		}
		cout << cnt5 + cnt3;*/
		//}
