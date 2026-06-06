/*
方向はあってたコーディング力の問題
*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    int n,k,m,c,v,find;
    ll cnt = 0;
    cin >> n >> k >> m;
    map<int ,vector<ll>> mp;
    vector<ll> all;
    map<int,int> check;
    for(int i = 0;i < n;i++){
        cin >> c >> v;
        mp[c].push_back(v);
    }
    for(auto j = mp.begin();j != mp.end();j++){
        sort(j->second.begin(),j->second.end(),greater<ll>{});
    }
    for(int i = 0;i < m;i++){
        int mx = 0;
        for(auto j = mp.begin();j != mp.end();j++){
            if(*(j->second.begin()) > mx && check[j->first] != 1){
                mx = *(j->second.begin());
                find = j->first;
            }
        }
        check[find] = 1;
        cnt += mx;
        mp[find].erase(mp[find].begin());
    }
    for(auto x : mp){
        for(auto v : x.second){
            all.push_back(v);
        }
    }
    sort(all.begin(),all.end(),greater<ll>{});
    for(int i = 0;i < k-m;i++){
        cnt += all[i];
    }
    cout << cnt << endl;
    return 0;

}