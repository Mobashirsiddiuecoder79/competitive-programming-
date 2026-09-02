#include <bits/stdc++.h>
using namespace std;

int main() {



    int n;
    cin >> n;
    if(n < 26){
        cout << "NO";
    }else{
        unordered_set<char> st;
        while(n--){
            char ch;
            cin >> ch;
            ch = tolower(ch);
            st.insert(ch);
        }
        if(st.size() >= 26){
            cout<< "YES";
        }else{
            cout<<"NO";
        }
    }
    return 0;
}