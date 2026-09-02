#include <bits/stdc++.h>
using namespace std;
#include <algorithm>

int main() {

    int n;
    cin >> n;

    while (n--) {
        int a;
        cin >> a;
        int b;
        cin >> b;
        int c;
        cin >> c;

        while(a + b < c || b + c < a || c + a < b ){
            if(a + b < c){
                c = a + b;
            }
            
            else if(b + c < a){
                a = b + c;
            }
            else if(c + a < b){
                b = c + a;
            }
        }
            

        cout << max({a, b, c}) - min({a, b, c}) << "\n";

    }
    return 0;
}