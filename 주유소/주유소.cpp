#include <iostream>
#include <vector>

using namespace std;
int main() {

	long long city, cnt = 0;

	cin >> city;

	vector<int> cities(city);
	vector<int> roads(city-1);

	for (int i = 0; i < roads.size(); i++) {
		cin >> roads[i];
	}
	for (int i = 0; i < cities.size(); i++) {
		cin >> cities[i];
	}
	long long price = 1000000000, result = 0;
	for (int i = 0; i < cities.size(); i++) {
		if (cities[i] < price)
			price = cities[i];
		result += roads[i] * price;
	}
	cout << result;
	return 0;
}