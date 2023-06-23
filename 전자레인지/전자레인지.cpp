#include <iostream>

using namespace std;

int main()
{
	int t;

	cin >> t;
	int a = 0, b = 0, c = 0;

	if (t % 10 != 0)
		cout << "-1";
	else {
		a = t / 300;
		if (t - a != 0)
			t %= 300;
		b = t / 60;
		if (t - b != 0)
			t %= 60;
		c = t / 10;
		
		cout << a << " " << b << " " << c;
	}
	
	return 0;
}