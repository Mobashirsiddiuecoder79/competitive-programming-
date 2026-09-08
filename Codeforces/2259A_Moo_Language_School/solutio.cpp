#include <bits/stdc++.h>
using namespace std;

int main() {

    int x;
    cin >> x;

    while(x--){

        int n , k ;
        cin >> n >> k;

        int farm = n / k;
        int cnt = 0;
        int ind = 0;
        bool build = false;


        while(n--){
            char ch;
            cin >> ch;
            ind++;
            if(ind <= k && ch == '0' && !build){
                build = true;
            }else if(ind == k && ch == '1' && !build){
                cnt++;
                build = true;
            }
            if(ind == k){
                ind = 0;
                build = false;
            }
        }
        cout<<cnt<< endl;
    }
    return 0;

}