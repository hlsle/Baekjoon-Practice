#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() // 사용 개수 x 사용 로프 중 가장 작은 값 = 물체의 최대 중량
{
	int rope = 0;
	
	cin >> rope;
	vector<int> v(rope);

	for (int i = 0; i < rope; i++)
		cin >> v[i];

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
		v[i] = v[i] * (rope - i);

	cout << *max_element(v.begin(), v.end());
	return 0;
}