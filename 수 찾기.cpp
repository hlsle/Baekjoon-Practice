#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int n, m;
	vector<int> v;
	vector<int> v2;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	
	cin >> m;
	for (int i = 0; i < m; ++i) {
		int a;
		cin >> a;
		v2.push_back(a);
	}

	sort(v.begin(), v.end());

	int cnt = 0;
	for (int i = 0; i < m; ++i) {
		if (binary_search(v.begin(), v.end(), v2[i]))
			cout << 1 << '\n';
		else cout << 0 << '\n';
	}
}
