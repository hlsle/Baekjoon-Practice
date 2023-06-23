#include <iostream>

using namespace std;
int main() {

	int x, y, w, h;
	int result;

	cin >> x >> y >> w >> h;

	if (w / 2 >= x) {
		result = x;
	}
	else {
		result = w - x;
	}

	if (h / 2 >= y) {
		result = min(result, y);
	}
	else {
		result = min(result, h - y);
	}

	cout << result;
	return 0;
}