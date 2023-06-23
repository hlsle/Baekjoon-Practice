#include <iostream>

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	int a = 0, b = 0;
	int c[2] = { 0 };

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '0') {
			if (b != 0) {
				b = 0;
				c[1]++;
			}
			a++;
		}
		else {
			if (a != 0) {
				a = 0;
				c[0]++;
			}
			b++;
		}
	}

	if (b != 0) {
		b = 0;
		c[1]++;
	}
	if (a != 0) {
		a = 0;
		c[0]++;
	}
	int m = min(c[0], c[1]);

	cout << m;
	return 0;
}