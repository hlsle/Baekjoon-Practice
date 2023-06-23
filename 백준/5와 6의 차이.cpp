#include <iostream>

using namespace std;

int changenum5(int num) {

	int n = num, change = 0;
	int t = 0, mul = 1;

	while (n) {
		t = n % 10;
		if (t == 6)
			t = 5;

		change += t * mul;
		mul *= 10;
		n /= 10;
	}
	return change;
}

int changenum6(int num) {

	int n = num, change = 0;
	int t = 0, mul = 1;

	while (n) {
		t = n % 10;
		if (t == 5)
			t = 6;

		change += t * mul;
		mul *= 10;
		n /= 10;
	}
	return change;
}

int main() {

	int a, b;

	cin >> a >> b;

	cout << changenum5(a) + changenum5(b) << " " << changenum6(a) + changenum6(b);

	return 0;
}