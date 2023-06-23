#include <iostream>

using namespace std;
int main() {

	int num;
	int f[50]={0};

	f[0] = 1; f[1] = 1;
	
	cin >> num;
	for (int i = 2; i < 50; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}

	cout << f[num];
	return 0;
}