#include <bits/stdc++.h>
using namespace std;

int main() {

    int x1;
    cin >> x1;
    
    int ans = x1 / 5;
    if(x1 % 5 != 0){
        ans++;
    }
    
    cout<<ans<<"";
    
    return 0;
}