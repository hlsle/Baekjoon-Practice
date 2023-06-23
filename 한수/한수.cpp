#include <iostream>

using namespace std;

int main() {

	int num;
	cin >> num;

	if (num < 100) {
		cout << num;
		return 0;
	}

	int d;
	int cnt = 0, c = 0;

	for(int i = 100; i <= num; ++i) {
		int n = num;
		c = 0;
		while (n % 10 == 0) {
			int a = n % 10;
			int b = (n / 10) % 10;
			
			if (i == n) {
				d = b - a;
				n /= 10;
			}
			else if (d != b - a) {
				n /= 10;
				break;
			}
			++c;
		}
		cout << c << endl;
		if (c > 1)
			++cnt;
	}

	cout << cnt;
}