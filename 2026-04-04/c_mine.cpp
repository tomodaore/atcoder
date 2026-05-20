/*
勉強
mapの使い方について
重複を消したいなら、setを使う。
アルゴリズムの大枠はあってる。
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main(){
    long long n,m;
    int tmpa,tmpb;
    map<int,map<int,int>> ab;
    cin >> n;
    string tmps;
    map<char,int> c[n];
    for(int i = 0;i < n;i++){
        cin >> tmpa >> tmpb;
        ab[tmpa].insert(make_pair(tmpb,i));
    }
    cin >> m;
    string s[m];
    for(long long i = 0;i < m;i++){
        cin >> s[i];
        for(auto x : ab[s[i].size()]){
            //cout << "x.second" << x.second << endl;
            c[x.second].insert(make_pair(s[i].at(x.first-1),1));
        }
    }
    // cout << "c" << endl;
    // for(auto x : c){
    //     for(auto y : x){
    //         cout << y.first << " " << y.second << endl;
    //     }
    //     cout << endl;
    // }
    for(long long i = 0;i < m;i++){
        //cout << s[i] << endl;
        if(s[i].size() != n){
            cout << "No" << endl;
            continue;
        }
        for(int j = 0;j < s[i].size();j++){
            if(c[j].count(s[i].at(j)) == 0){
                cout << "No" << endl;
                break;
            }
            if(j == s[i].size()-1) cout << "Yes" << endl;
        }
    }
    return 0;
}