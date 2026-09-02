#include <bits/stdc++.h>
using namespace std;

int main() {

    int x = 0;
    int y = 0;
    bool found = false;
    
    for(int i = 1; i < 6 && !found; i++){
        for(int j = 1; j < 6; j++){
            int num;
            cin >> num;
            if(num == 1){
                x = i;
                y = j;
            }
        }
    }
    int ans = 0;
    ans = abs(3 - x) + abs(3 - y);

    cout << ans << '\n';

    return 0;
}