/*
全探索で隣り合ったらだめをはじめからO(n^2)でやったがTLEになる
そうじゃなくて連続していたら分割してそれぞれの個数を数えればよかった

*/

#include <iostream>
#include <string>
using namespace std;

#define num 998244353

int main(){
    string s;
    long long cnt = 0;
    cin >> s;
    for(auto i = s.begin();i != s.end();i++){
        for(auto j = i;j != s.end();j++){
            if(i == j){
                cnt++;
                continue;
            }else{
                if(*j == *(j - 1)){
                    break;
                }else{
                    cnt++;
                }
            }
        }
    }
    cout << (cnt % num) << endl;


    return 0;
}