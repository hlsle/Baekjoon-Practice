#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool comfirst(pair<int, int> &v, pair<int, int> &v2) {
	return v.first < v2.first;
}

int main() {

	int tc, num, a, b, cnt = 1, max;
	
	cin >> tc;
	int *test = new int[tc];
	vector<pair<int, int>> v;

	for (int i = 0; i < tc; i++) {
		cin >> num;
		for (int j = 0; j < num; j++) { 
			cin >> a >> b;
			v.push_back(make_pair(a, b));
		}
		sort(v.begin(), v.end(), comfirst); // first ������������ ����
		max = v[0].second;
		for (int j = 1; j < v.size(); j++) { // second���� ���� �� �ö����� ��ü
			if (v[j].second < max) {
				max = v[j].second;
				cnt++;
			}
		}
		test[i] = cnt;
		cnt = 1;
		v.clear(); // num�� 2�̻��϶��� ���ؼ� ��� ���� ����
	}
	for (int i = 0; i < tc; i++)
		cout << test[i] << endl;
	return 0;
}