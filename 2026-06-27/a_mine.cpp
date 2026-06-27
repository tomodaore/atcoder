#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int size = s.size(),cnte = 0,cntw = 0;
    for(auto x : s){
        if(x == 'E'){
            cnte++;
        }else{
            cntw++;
        }
    }
    if(cntw < cnte){
        cout << "East" << endl;
    }else{
        cout << "West\n";
    }
    return 0;

}