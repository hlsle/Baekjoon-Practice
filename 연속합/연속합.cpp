#include <iostream>
#include <algorithm>

using namespace std;
int main() {

	int num, m;
	int arr[100001] = { 0 };
	int dp[100001] = { 0 };
	cin >> num;
	for (int i = 1; i <= num; i++) {
		cin >> arr[i];
	}
	m = arr[1];
	for (int i = 1; i <= num; i++) {
		dp[i] = arr[i];
		if (i == 1) continue;
		if (dp[i] < dp[i - 1] + arr[i])
			dp[i] = dp[i - 1] + arr[i];
		if (dp[i] > m)
			m = dp[i];
	}

	cout << m;
	return 0;
}