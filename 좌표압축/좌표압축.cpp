#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {

	int n, a;
	cin >> n;
	vector<int> v, idx;

	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
		idx.push_back(a);
	}

	sort(idx.begin(), idx.end());

	idx.erase(unique(idx.begin(), idx.end()), idx.end());

	for (auto i : v) {
		cout << lower_bound(idx.begin(), idx.end(), i) - idx.begin() << " ";
	}
	return 0;
}