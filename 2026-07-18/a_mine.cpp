#include <bits/stdc++.h>
using namespace std;

int main(){
    float h,w;
    cin >> h >> w;
    h /= 100;
    if(w/h/h >= 25){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
    return 0;
}