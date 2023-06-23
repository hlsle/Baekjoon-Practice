#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool com(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else return a.second < b.second;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;

	cin >> n;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}

	sort(v.begin(), v.end(), com);

	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << endl;
	}
	return 0;
}