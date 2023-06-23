#include <iostream>

using namespace std;
int main() {

	int num, n;
	int arr[1001] = { 0 };
	int dp[1001] = { 0 };
	int rdp[1001] = { 0 };

	cin >> num;
	for (int i = 1; i <= num; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i <= num; i++) {
		dp[i] = 1;
		for (int j = 1; j <= i; j++) {
			if (arr[i] > arr[j] && dp[i] < dp[j] + 1) {
					dp[i] = dp[j] + 1;
			}
		}
	}

	for (int i = num; i >= 1; i--) {
		rdp[i] = 1;
		for (int j = num; j >= i; j--) {
			if (arr[i] > arr[j] && rdp[i] < rdp[j] + 1) {
				rdp[i] = rdp[j] + 1;
			}
		}
	}

	int answer = 0;
	for (int i = 0; i <= num; i++) {
		if (answer < dp[i] + rdp[i] - 1)
			answer = dp[i] + rdp[i] - 1;
	}

	cout << answer;
	return 0;
}