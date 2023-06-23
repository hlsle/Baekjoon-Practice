#include <iostream>

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long tri[101] = { 0,1,1,1,2,2,0 };

	int n;

	for (int i = 6; i < 101; i++) {
		tri[i] = tri[i - 1] + tri[i - 5];
	}

	cin >> n;
	for (int i = 1; i <= n; i++) {
		int index;
		cin >> index;
		cout << tri[index] << "\n";
	}
	return 0;
}