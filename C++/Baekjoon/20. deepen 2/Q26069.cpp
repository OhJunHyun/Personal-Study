#include<iostream>
#include<map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<string, bool> par;
	string a, b;
	int n, cnt = 0;
	cin >> n; 
	while (n--) {
		cin >> a >> b;

		if (a == "ChongChong") {
			par.insert({ a, true });
		}
		else if (b == "ChongChong") {
			par.insert({ b, true });
		}

		if (par[a]) {
			par[b] = true;
		}
		if (par[b]) {
			par[a] = true;
		}
	}

	for (map<string, bool>::iterator iter = par.begin(); iter != par.end(); iter++) {
		if ((*iter).second) {
			cnt++;
		}
	}
	cout << cnt;
}