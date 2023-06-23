#include <iostream>
#include <algorithm>

using namespace std;
int main() {

	int num, cnt=0;
	int arr[301] = { 0 };
	long long int dp[301] = { 0 };
	long long int m = 0;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		cin >> arr[i];
	}
	
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];

	for (int i = 3; i <= num; i++) {
		dp[i] = max(arr[i] + dp[i - 2], arr[i] + dp[i - 3] + arr[i - 1]);
	}

	cout << dp[num];
	return 0;
}