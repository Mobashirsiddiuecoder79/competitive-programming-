#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int h;
    cin >> h;

    int t = n;
    int cnt = 0;

    while (t--) {
        int a;
        cin >> a;

        if (a > h)
            cnt += 2;
        else
            cnt++;
    }

    cout << cnt << '\n';

    return 0;
}