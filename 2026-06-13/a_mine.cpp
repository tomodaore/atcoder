#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(auto x : s){
        if(x >= '0' && x <= '9'){
            cout << x;
        }
    }
    cout << endl;
    return 0;

}