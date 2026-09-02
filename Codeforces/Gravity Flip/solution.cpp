#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

   vector<int> v;

    while (t--) {
        int p;
        cin >> p;
        v.push_back(p);
    }

    for(int i = v.size() - 1; i >= 0; i--){
        for(int j = i - 1; j >= 0; j--){
            if(v[i] < v[j]){
                int temp = v[j] - v[i];
                v[i] += temp;
                v[j] -= temp;
            }
        }
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}
