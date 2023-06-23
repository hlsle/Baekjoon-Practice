#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {

	int n;
	float sum = 0;
	cin >> n;
	vector<int> v(n);
	int cnt[8001]={0};
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
		cnt[v[i] + 4000]++;
	}
	int num = (int)floor(sum / n + 0.5);
	sort(v.begin(), v.end());

	int max = 0, flag=0;

	for (int i = 0; i < 8001; i++)
	{
		if (cnt[i] > max)
		{
			max = cnt[i];
			flag = i;
		}
	}

	for (int i = flag + 1; i < 8001; i++)
	{
		if (cnt[i] == max)
		{
			flag = i;
			break;
		}
	}
	cout << num << "\n" << v[n / 2] << "\n" <<  flag - 4000 << "\n" << abs(v[n-1]-v[0]);
	return 0;
}