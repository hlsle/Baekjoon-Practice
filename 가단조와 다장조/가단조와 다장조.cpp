#include <iostream>
#include <vector>

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	vector<int> v;
	int a = 0, c = 0;

	cin >> s;

	v.push_back(0);
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '|')
			v.push_back(i+1);
	}

	for (int i = 0; i < v.size(); i++) {
		if (s[v[i]] == 'A' || s[v[i]] == 'D' || s[v[i]] == 'E')
			a++;
		else if (s[v[i]] == 'C' || s[v[i]] == 'F' || s[v[i]] == 'G')
			c++;
	}

	if (a > c)
		cout << "A-minor";
	else if (a < c)
		cout << "C-major";
	else {
		if(s[s.length()-1] == 'A' || s[s.length() - 1] == 'D' || s[s.length() - 1] == 'E')
			cout << "A-minor";
		else cout << "C-major";
	}
	return 0;
}