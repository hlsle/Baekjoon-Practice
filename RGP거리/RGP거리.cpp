#include <iostream>
#include <algorithm>

using namespace std;
int main() {

	int n, m=1000001;
	int color[1001][4] = { 0 };
	cin >> n;

	for (int i = 1; i < n+1; i++) {
		cin >> color[i][1] >> color[i][2] >> color[i][3];
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < 4; j++) {
			if (j == 1) {
				color[i][j] += min(color[i - 1][2], color[i - 1][3]);
			}
			else if (j == 2) {
				color[i][j] += min(color[i - 1][1], color[i - 1][3]);
			}
			else {
				color[i][j] += min(color[i - 1][1], color[i - 1][2]);
			}
		}
	}
	for (int i = 1; i < 4; i++)
		m = min(m, color[n][i]);

	cout << m;
	return 0;
}