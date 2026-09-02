#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int x = min({a, b, c});
        int z = max({a, b, c});
        int y = a + b + c - x - z;

        if(x == y || y == z || z == x){
            cout<< 0 << endl;
        }else{
            cout << min(y - x, z - y) << endl;
        }
    }
    return 0;
}