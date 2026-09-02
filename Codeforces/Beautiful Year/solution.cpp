#include <bits/stdc++.h>
using namespace std;
#include <numeric>

int main() {

    int t;
    cin >> t;

    vector<int> v(10,0);
    int sum = 0;
    while(sum != 4){
        t++;
        v.assign(10, 0);
        int x = t;
        while(x != 0){
            int remin = x % 10;
            v[remin] = 1;
            x /= 10;
        }
        sum = accumulate(v.begin(), v.end(), 0);
    }
    cout << t << "";
    return 0;

}