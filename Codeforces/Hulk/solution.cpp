#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    
    if(n == 1){
        cout << "I hate it";
    }else{
        cout << "I hate ";
    }
    
    
    for(int i = 2; i <= n - 1; i++){
        if(i % 2 != 0){
            cout << "that I hate ";
        }else{
            cout << "that I love ";
        }
    }

    if(n != 1 && n % 2 != 0){
        cout <<"that I hate it";
    }else if(n != 1 && n % 2 == 0){
        cout << "that I love it";
    }

    return 0;
}