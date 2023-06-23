#include <iostream>
#include <vector>
#include <stack>;

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, num;

	cin >> n;
	vector<int> v(n);
	vector<int> v2;
	stack<int> s;

	for (int i = 0; i < n; i++)
		cin >> v[i];

	for (int i = n - 1; i >= 0; i--) {
		while (!s.empty() && s.top() <= v[i])
			s.pop();

		if (s.empty())
			v2.push_back(-1);
		else v2.push_back(s.top());

		s.push(v[i]);
	}

	for (int i = v2.size()-1; i >=0; i--) {
		cout << v2[i]<<" ";
	}
	return 0;
}