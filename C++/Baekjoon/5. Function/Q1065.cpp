#include<iostream>
#include<cmath>
using namespace std;

int hannum(int num) {
    int cnt = 0;
    if (num < 100) {
        return num;
    }
    else {
        cnt = 99;
        for (int i = 100; i <= num; i++) {
            int hun = i / 100;
            int ten = (i / 10) % 10;
            int one = i % 10;

            if ((hun - ten) == (ten - one)) {
                cnt += 1;
            }
        }
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;

    cout << hannum(n);
    return 0;
}