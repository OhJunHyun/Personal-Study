#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, a;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }

    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        cout << arr[i] << '\n';
    }
}