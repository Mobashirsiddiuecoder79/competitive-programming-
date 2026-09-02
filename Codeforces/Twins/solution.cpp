#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int Tsm = 0;
    vector<int> coins;

    while (n--) {
        int c1;
        cin >> c1;
        Tsm += c1;
        coins.push_back(c1);
    }

    sort(coins.begin(), coins.end(), greater<int>());

    int cnt = 0;
    int sm = 0;

    for (size_t i = 0; i < coins.size(); i++) {
        sm += coins[i];
        cnt++;

        if (sm > Tsm - sm) {
            break;
        }
    }

    cout << cnt << endl;

    return 0;
}