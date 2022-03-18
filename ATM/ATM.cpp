#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int p;

	cin >> p;
	vector<int> v(p);
	for (int i = 0; i < p; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int sum = 0;
	
	for (int i = 0; i < p; i++) {
		sum += v[i] * (p - i);
	}

	cout << sum;
	return 0;
}