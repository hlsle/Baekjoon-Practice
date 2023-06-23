#include <iostream>
#include <algorithm>

using namespace std;
int main() {

	int n, m = 0;
	int arr[501][501] = { 0 };

	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i + 1; j++)
			cin >> arr[i][j];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0) {
				arr[i][j] += arr[i - 1][j]; // 처음은 바로 위랑 더하면 됨
			}
			else if (j == i) {
				arr[i][j] += arr[i - 1][j - 1]; // 같으면 대각선이랑 더하면 됨
			}
			else arr[i][j] += max(arr[i - 1][j - 1], arr[i - 1][j]); // 나머지는 더 큰 수랑 더하면 됨
			m = max(m, arr[i][j]);
		}
	}

	cout << m;
	return 0;
}