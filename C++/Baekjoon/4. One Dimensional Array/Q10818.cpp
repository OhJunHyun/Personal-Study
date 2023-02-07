#/*include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test;
    cin >> test;
    int max = 0, min = 0;

    vector<int> arr;
    for (int i = 0; i < test; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    int temp;
    for (int j = 0; j < arr.size(); j++) {
        temp = arr[j];
        for (int k = 0; k < arr.size(); k++) {
            if (temp > arr[k]) {
                max = temp;
                if (temp < arr[k]) {
                    max = arr[k];
                }
            }

            else if (temp < arr[k]) {
                min = temp;
                if (temp > arr[k]) {
                    min = arr[k];
                }
            }
        }
    }

    cout << min << " " << max;

}*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int test;
    cin >> test;
    vector<int> arr;

    for (int i = 0; i < test; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    sort(arr.begin(), arr.end());
    int min, max;
    cout << arr[0] << " " << arr[arr.size()-1];

}