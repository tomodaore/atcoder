#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll h,w,n,q;
    vector<ll> ud,lr;
    cin >> h >> w >> n >> q;
    for(auto i = 0;i < n;i++){
        ll tmp1,tmp2;
        cin >> tmp1 >> tmp2;
        ud.push_back(tmp1);
        lr.push_back(tmp2);    
    }
    sort(ud.begin(),ud.end());
    sort(lr.begin(),lr.end());
    int ans = 0;
    for(int i = 0;i < q;i++){
        int cmd,u,d;
        cin >> cmd >> u >> d;
        if(cmd == 1){
            ans = upper_bound(ud.begin(),ud.end(),d) - lower_bound(ud.begin(),ud.end(),u);
        }else{
            ans = upper_bound(lr.begin(),lr.end(),d) - lower_bound(lr.begin(),lr.end(),u);
        }
        cout << ans << endl;
    }

    return 0;
    
}