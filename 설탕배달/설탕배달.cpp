#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;
	int num = n;

	if (n == 1 || n == 2 || n == 4 || n == 7)
		cout << "-1";
	else {
		int i = 0, cnt;
		while (1) {
			cnt = 0;
			cnt += (num - 5 * i) / 5;
			num = 5 * i + (num - 5 * i) % 5;
			cnt += num / 3;
			if (num % 3 == 0) break;
			num = n;
			i++;
		}
		cout << cnt;
	}
	return 0;
}