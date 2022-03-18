#include <iostream>
#include <algorithm>

using namespace std;

struct MEETING {
    int start;
    int end;
};

bool compare(MEETING a, MEETING b) {
    if (a.end < b.end) return true; // 회의가 빨리 끝나는 순으로
    else if (a.end == b.end)
           if (a.start < b.start) return true; // 그 중에서 회의 시작 시간이 빠른 순으로
    return false;
}

int main()
{
    int n;
    
    cin >> n;

    MEETING* m = new MEETING[n];

    for (int i = 0; i < n; i++)
        cin >> m[i].start >> m[i].end;

    sort(m, m + n, compare);

    int end = m[0].end, cnt = 1;

    for (int i = 1; i < n; i++) {
        if (end <= m[i].start) {
            end = m[i].end;
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}