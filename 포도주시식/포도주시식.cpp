#include <iostream>
#include <algorithm>
using namespace std;
int main() {

	int n, m = 0;
	int arr[10001] = { 0 };
	int dp[10001] = { 0 };

	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	dp[1] = arr[1]; dp[2] = dp[1] + arr[2];
	

	cout << m;
	return 0;
}