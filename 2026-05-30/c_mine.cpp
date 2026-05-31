/*

*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ll = long long;

int main(){
    vector<ll> a,b;
    ll n,m,tmp,cnt = 0;
    int k1 = 0,k2 = 0;
    cin >> n >> m;
    for(ll i = 0;i < n;i++){
        cin >> tmp;
        a.push_back(tmp);
    }for(ll i = 0;i < m;i++){
        cin >> tmp;
        b.push_back(tmp);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    // for(auto x:a) cout << x << ":" ;
    // cout << endl;
    // for(auto x:b) cout << x << ":" ;
    // cout << endl;


    for(int i = 0;i+k2 < b.size() && i+k1 < a.size();){
        //cout << a.at(i+k1) << ":" << b.at(i+k2) << endl;
        if(a.at(i+k1)*2 >= b.at(i+k2)){
            //cout << a.at(i+k1) << ":" << b.at(i+k2) << endl;
            cnt++;i++;
        }else{
            k1++;
        }
    }

    cout << cnt << endl;
    return 0;
}