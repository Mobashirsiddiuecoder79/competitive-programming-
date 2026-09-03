#include <bits/stdc++.h>
using namespace std;

int main() {

    char ch;
    cin >> ch;
    unordered_set<char> st;
    while(ch != '}'){
        cin >> ch;
        if(ch >= 97 && ch < 123){
            st.insert(ch);
        }
    }
    cout << st.size();
} 