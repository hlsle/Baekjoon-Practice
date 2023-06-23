#include <iostream>
#include <stack>
#include <vector>

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, cnt = 0;
	
	stack<int>s;	
	vector<string> str;

	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	for (int i = 1; i <= n; i++) {
		s.push(i);
		str.push_back("+");

		while (!s.empty() && s.top() == v[cnt]) {
			s.pop();
			cnt++;
			str.push_back("-");
		}
	}
	
	if (!s.empty()) cout << "NO";
	else {
		for (auto x : str) {
			cout << x << "\n";
		}
	}

	return 0;
}