#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> black {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};
vector<string> white{
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};

vector<string> chess;
int main() {

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		string str;
		cin >> str;
		chess.push_back(str);
	}

	int cnt_b = 0, cnt_w = 0, result = 0;
	
	for (int k = 0; k < n - 7; ++k) {
		for (int l = 0; l < m - 7; ++l) {
			cnt_b = 0; cnt_w = 0;
			for (int i = 0; i < 8; ++i) {
				for (int j = 0; j < 8; ++j) {
					if (black[i][j] == chess[i + k][j + l])
						++cnt_b;
					if (white[i][j] == chess[i + k][j + l])
						++cnt_w;
				}
			}
			cnt_b = max(cnt_b, cnt_w);
			result = max(result, cnt_b);
		}
	}
	
	cout << 64 - result;
}
