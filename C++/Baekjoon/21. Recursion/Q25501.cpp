#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int reccnt = 0;

int recursion(const char* s, int l, int r) {
    reccnt++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    cout << recursion(s, 0,strlen(s) - 1) << " ";
    int rtncnt = reccnt;
    reccnt = 0;
    return rtncnt;
}

int main() {
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);*/

    int n = 0;
    scanf("%d", &n);

    //cin >> n;
    while (n--) {
        char str[1000];
        scanf("%s", str);
        //cin >> str;
        printf("%d\n", isPalindrome(str));
        //cout << isPalindrome(str) << '\n';
    }
    return 0;
}
