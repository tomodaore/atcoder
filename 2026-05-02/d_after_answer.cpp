#include <iostream>
#include <string>
#include <map>
using namespace std;
#define amari 998244353

int main(){
    string s;
    long long cnt = 0;
    cin >> s;
    map<char ,long long> dp;
    //cout << dp['a'] << ":"  << dp['b'] << ":" << dp['c'] << endl;
    for(auto c : s){
        dp[c] = (dp['a'] + dp['b'] + dp['c'] + 1) % amari;
        //cout << dp['a'] << ":"  << dp['b'] << ":" << dp['c'] << endl;
    }

    for(auto[k,v] : dp){
        cnt += v;
    }
    
    cout << cnt % amari << endl;
    return 0;
    
}