#include <bits/stdc++.h>
using namespace std;

int main() {


    int p;
    cin >> p;

    int m;
    cin >> m;

    int n;
    cin >> n;
    
    int sm = 0;
    for(int i = 1; i <= n; i++){
        sm += i*p;
    }

    int ans = sm - m;
    
    if(ans >= 0){
        cout<< ans <<"";
    }else{
        cout<< "()" <<"";
    }
    
    
    return 0;
}