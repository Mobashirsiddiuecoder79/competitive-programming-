#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    double tol = n;
    double fc = 0;

    while (n--) {
        double ct;
        cin >> ct;
       fc += (ct/100);
    }

    double ans = (fc/tol)*100;
    cout<< ans;

    return 0;
}