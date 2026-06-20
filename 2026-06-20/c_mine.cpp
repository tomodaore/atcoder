#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,h,l,maxl,semaxl;
    cin >> n;
    vector<pair<ll,ll>> hl,hl2;
    for(ll i = 0;i < n;i++){
        cin >> h >> l;
        hl.push_back(make_pair(h,l));
        hl2.push_back(make_pair(l,h));
        if(i == 0){
            maxl = l;
        }else{
            if(maxl <= l){
                semaxl = maxl;
                maxl = l;
            }
        }
    }
    //cout << maxl << ":" << semaxl << endl;
    sort(hl.begin(),hl.end(),greater<pair<ll,ll>>());
    sort(hl2.begin(),hl2.end());
    // cout << "ok\n";
    // for(auto x : hl){
    //     cout << x.first << ":" << x.second << endl;
    // }
    // cout << "ok\n";
    // for(auto x : hl2){
    //     cout << x.first << ":" << x.second << endl;
    // }
    ll q,t;
    cin >> q;
    for(int i = 0;i < q;i++){
        cin >> t;
        //cout << "t:" << t << endl;
        if(semaxl <= t){
            cout << hl2.back().second << endl;
            continue;
        }
        for(auto x : hl){
            if(x.second > t){
                //cout << "q:" << q << " t:" << t << endl;
                cout << x.first << endl;
                break;
            }
        }
    }


    return 0;
}