#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    string p1;
    cin >> p1;
    n--;

    int cnt = 0;
    while (n--) {
        string p2;
        cin >> p2;

        if(p1[1] == p2[0]){
            cnt++;
        }
        p1 = p2;
    }
     cout << cnt + 1 << '\n';

    return 0;
}