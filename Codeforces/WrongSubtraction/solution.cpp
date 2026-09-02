#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int k;
    cin >> k;
    int t = k;

    while (t--) {
        if(n % 10 != 0){
            n--;
        }
        else{
            n /= 10;
        }
    }

    cout<< n;

    return 0;
}