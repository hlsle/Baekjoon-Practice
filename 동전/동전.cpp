#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, k;
	
	cin >> n >> k;

	vector<int> v(n);
	for (int i = 0; i < n; i++) 
		cin >> v[i];

	sort(v.begin(), v.end(), greater<int>());

	int cnt = 0;

	for (int i = 0; i < v.size(); i++) {
		if (k >= v[i]); {
			cnt += k / v[i];
			if (k - k / v[i] != 0) {
				k %= v[i];
			}
		}
	}
	cout << cnt;
	return 0;
}