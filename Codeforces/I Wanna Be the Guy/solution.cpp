#include <bits/stdc++.h>
using namespace std;

int main() {

    unordered_set<int> st;

    int n;
    cin >> n;
    
    int l1;
    cin >> l1;

    while(l1--){
        int x;
        cin >> x;
        st.insert(x);
    }

    int l2;
    cin >> l2;

    while(l2--){
        int y;
        cin >> y;
        st.insert(y);
    }

    if(st.size() == n){
        cout << "I become the guy.";
    }else{
        cout << "Oh, my keyboard!";
    }

    return 0;
}