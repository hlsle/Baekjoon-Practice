#include <iostream>
#include <cmath>

using namespace std;
int main() {

	long long k, n, result;

	cin >> k >> n;
	
	if (n == 1)
		result = -1;
	else {
		result = k * n / (n - 1);
		if (k * n % (n - 1) != 0)
			result++;
	}

	cout << result;
	return 0;
}