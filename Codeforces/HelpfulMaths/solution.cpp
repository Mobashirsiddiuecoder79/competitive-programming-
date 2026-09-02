#include <bits/stdc++.h>
using namespace std;

int main() {

    string s1;
    cin >> s1;

    vector<int> v;
    string s2 = "";

    for(int i = 0; i < s1.size(); i++){
        if(s1[i] > 43){
           v.push_back(s1[i] - '0');
        }
    }
    sort(v.begin(),v.end());

    for(int i = 0; i < v.size(); i++){
        s2 += v[i] + '0';
        s2 += '+';
    }
    
    s2.pop_back();
    cout << s2 << "";

    return 0;

}