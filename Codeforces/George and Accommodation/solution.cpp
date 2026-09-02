#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    int cnt = 0;

    while (t--) {
        int p;
        cin >> p;

        int q;
        cin >> q;

        if(q - p > 1){
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}