#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
int main() {

	char* str = new char[100001];

	cin >> str;
	int num = 0, zerocnt = 0;
	vector<int> v;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] > 47 && str[i] < 58) {
			num += str[i] - 48;
			v.push_back(str[i] - 48);
			if (str[i] - 48 == 0)
				zerocnt++;
		}
	}
	sort(v.begin(), v.end(), greater<>());
	if (zerocnt == 0 || num % 3 != 0)
		cout << "-1";
	else {
		for (int i = 0; i < v.size(); i++)
			str[i] = v[i] + 48;
		cout << str;
	}
	return 0;
}