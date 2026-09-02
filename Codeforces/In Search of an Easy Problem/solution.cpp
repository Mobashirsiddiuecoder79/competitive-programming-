#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    bool found = true;
    while (t--) {
        int p;
        cin >> p;

        if(p == 1){
            cout<<"HARD";
            found = false;
            break;
        }
    }
    if(found)
        cout << "EASY"<< '\n';

    return 0;
}