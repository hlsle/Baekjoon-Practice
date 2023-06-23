#include <iostream>

using namespace std;
int main() {

	int n;
	int dp[1000001] = { 0 };

	cin >> n;

	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 3 == 0)
			dp[i] = min(dp[i / 3] + 1, dp[i]);
		if (i % 2 == 0)
			dp[i] = min(dp[i / 2] + 1, dp[i]);
		
	}

	cout << dp[n];
	return 0;
}