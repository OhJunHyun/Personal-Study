#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	map<string, int> pokemon;
	string  nn;
	vector<string> name;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> nn;
		pokemon.insert(make_pair(nn, i));
		name.push_back(nn);
	}
	
	vector<string> problem;
	string pro;
	for (int i = 0; i < m; i++)  {
		cin >> pro;
		if (pro[0] >= 65 && pro[0] <= 90) {
			problem.push_back(to_string(pokemon[pro]+1));
		}
		else {
			problem.push_back(name[stoi(pro)-1]);
		}
	}
	
	for (int i = 0; i < m; i++) {
		cout << problem[i] << '\n';
	}
	
	return 0;
}