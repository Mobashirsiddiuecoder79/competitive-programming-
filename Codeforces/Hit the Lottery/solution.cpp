#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v = {100,20,10,5,1};

    int cnt = 0;
    int i = 0;
    while(n != 0 && i < v.size()){
        if(n >= v[i]){
            cnt +=  n / v[i];
            n = n % v[i]; 
        }
        i++;
    }
    cout << cnt;

    return 0;
}