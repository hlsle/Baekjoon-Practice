#include <iostream>
#include <algorithm>

using namespace std;
int main() {

	int num, maxVal;
	int dp[1000] = { 0 };
	int arr[1000];
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < num; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				if (dp[i] < dp[j] + 1)
					dp[i] = dp[j] + 1;
			}
		}
	}
	maxVal = *max_element(dp, dp + num);
	cout << maxVal;
	return 0;
}