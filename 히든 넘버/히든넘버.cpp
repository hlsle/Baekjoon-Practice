#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {

	int a;
	string s;
	vector<pair<int, int>> v;
	cin >> a >> s;

	long long n = 0, m, result = 0;
	for (int i = 0; i < a; i++) {
		if (isdigit(s[i]) != 0) {
			if (n == 0)
				m = i;
			n++;
		}
		else {
			if (n != 0)
				v.push_back(make_pair(m, n));
			n = 0; m = 0;
		}
	}

	if (n != 0)
		v.push_back(make_pair(m, n));

	for (int i = 0; i < v.size(); i++) {
		result += stoi(s.substr(v[i].first, v[i].second));
	}
		
	cout << result;
	return 0;
}