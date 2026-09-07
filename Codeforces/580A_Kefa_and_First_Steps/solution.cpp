#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int cnt = 0;
    int mx = 0;

    int pre = -1;
    while(n--){
        int x;
        cin >> x;
        if(x >= pre){
            cnt++;
        }else{
            cnt = 1;
        }
        pre = x;
        mx = max(mx,cnt);
    }

    cout<< mx;

    return 0;

}