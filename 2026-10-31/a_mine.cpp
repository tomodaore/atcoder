#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int cnt = 0;
    cin >> s;
    for(auto i = s.begin();i != s.end();i++){
        if(*i == 'o'){
            cnt++;
        }
    }
    cout << (cnt % 2 == 1 ? "odd\n" : "even\n");
    return 0;
}