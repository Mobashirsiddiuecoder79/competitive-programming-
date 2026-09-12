#include <iostream>
#include <string>

using namespace std;

int main() {

    int a , b , c;
    cin >> a >> b >> c;

    int mn = 1;
    if((a > b && b > c) || (c > b && b > a)){
        mn = b;
    }else if((b > a && a > c) || (c > a && a > b)){
        mn = a;
    }else{
        mn = c;
    }

    int dis = abs(mn - a) + abs(mn - b)+ abs(mn - c);

    cout<< dis;

    return 0;

}