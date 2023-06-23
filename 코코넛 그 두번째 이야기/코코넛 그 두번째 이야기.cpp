#include <iostream>

using namespace std;
int main() {

	int n, p = 0;

	while (1) {
		p = 0;
		cin >> n;
		if (n == -1)
			break;

		if (n == 1) {
			cout << n << " coconuts, no solution" << endl;
			continue;
		}

		for (int i = 2; i < n - 1; i++) {
			int co = n;
			for (int j = 0; j < i; j++) {
				co -= 1;
				if (co % i == 0)
					co -= co / i;
				else break;

				if (j == i - 1)
					p = i;
			}
		}
		if(p!=0)
			cout << n << " coconuts, " << p << " people and 1 mokey" << endl;
		else cout << n << " coconuts, no solution" << endl;
	}
	

	return 0;
}