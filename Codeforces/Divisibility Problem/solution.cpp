#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int remin = a % b;

        if (remin != 0)
        {
            cout << b - remin << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }
    return 0;
}