#include <iostream>>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	char c[51]; // c++은 끝에 null이 들어가므로 문자열 크기는 +1

	cin >> c;
	int num = 0, result = 0;
	vector<int> v;
	for (int i = 0; i < strlen(c); i++) {
		if (c[i] > 47 && c[i] < 58) {
			num = num * 10 + c[i] - 48;
			if (i == strlen(c) - 1)
				v.push_back(num);
		}
		else if (c[i] == '+') {
			v.push_back(num);
			v.push_back(-1);
			num = 0;
		}
		else if (c[i] == '-') {
			v.push_back(num);
			v.push_back(-2);
			num = 0;
		}
	}
	vector<int> s;
	num = 0;
	if (find(v.begin(), v.end(), -1) == v.end()) {
		result = v[0];
		for (int i = 1; i < v.size(); i++) {
			if (v[i] == -2)
				continue;
			result -= v[i];
		}
	}
	else if (find(v.begin(), v.end(), -2) == v.end()) {
		result = v[0];
		for (int i = 1; i < v.size(); i++) {
			if (v[i] == -1)
				continue;
			result += v[i];
		}
	}
	else {
		for (int i = 0; i < v.size(); i++) {
			if (v[i] == -2) {
				s.push_back(num);
				num = 0;
				continue;
			}
			else if (v[i] == -1)
				continue;

			num += v[i];
			if (i == v.size() - 1)
				s.push_back(num);
		}
		result = s[0];
		for (int i = 1; i < s.size(); i++) {
			result -= s[i];
		}
	}
	cout << result;
	return 0;
}
//분배법칙 이용 초간단;;

/*int main() {
	while (o != '\n') {
		scanf("%d%c", &n, &o);
		sum += sign * n;
		if (o == '-') sign = -1;
	}
	printf("%d\n", sum);
}*/