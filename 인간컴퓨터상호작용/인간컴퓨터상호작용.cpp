#include <iostream>

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	int num, a, b;
	int sum[200000][26]={0};
	string s;
	char t;
	
	cin >> s >> num;
	for (int i = 0; i < s.length(); i++) {
		if(i!=0)
			for (int j = 0; j < 26; j++) {
				sum[i][j] = sum[i - 1][j];
			}
		int str = s[i] - 'a';
		sum[i][str]++;
	}

	for (int i = 0; i < num; i++) {
		cin >> t >> a >> b;
		int second = t - 'a';
		cout << sum[b][second] - sum[a][second] << "\n";
	}
	return 0;
}