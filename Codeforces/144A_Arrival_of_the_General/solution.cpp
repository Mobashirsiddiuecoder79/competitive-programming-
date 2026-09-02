#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    
    vector<int> v;

    while(n--){
        int x;
        cin >> x;
        v.push_back(x);
    }

    auto it = max_element(v.begin(),v.end());
    int mxInd = it - v.begin();

    auto it2 = min_element(v.rbegin(),v.rend());
    int mnInd = v.size() - 1 - (it2 - v.rbegin());

    if(mxInd < mnInd){
        cout << mxInd + v.size() - 1 - mnInd;
    }else{
        cout<< mxInd + v.size() - 2 -  mnInd;
    }

    
    return 0;
}