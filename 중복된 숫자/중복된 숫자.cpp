#include <iostream>

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, a, b = 0;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		b += i;
		cin >> a;
		b -= a;
	}

	cout << -b;
	return 0;
}