#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, sum = 0;

    while (1) {
        vector<int> factor = {};
        int sum = 0;
        cin >> n;
        if (n == -1) {
            break;
        }

        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                factor.push_back(i);
            }
        }
        
        for (int i = 0; i < factor.size(); i++) {
            sum += factor[i];
        }
        
        if (sum == n) {
            cout << n << " = ";
            for (int i = 0; i < factor.size() - 1; i++) {
                cout << factor[i] << " + ";
            }
            cout << factor[factor.size() - 1] << endl;
        }
        else
            cout << n << " is NOT perfect." << endl;
    }
    return 0;
}