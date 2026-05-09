#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    ll n,k,l,tmp,cnt = 0;
    cin >> n >> k;
    vector<ll> a[n],c;
    for(ll i = 0;i < n;i++){
        cin >> l;
        for(ll j = 0;j < l;j++){
            cin >> tmp;
            a[i].push_back(tmp);
        }
    }
    bool o = false;
    for(ll i = 0;i < n;i++){
        cin >> tmp;
        c.push_back(tmp);
    }
    for(ll i = 0;i < n;i++){
        if((cnt + a[i].size()*c[i]) >= k){
            ll f = (k-cnt-1) % a[i].size();
            //cout << i << ":" << f << ":" << cnt << endl;
            cout << a[i][f] << endl;
            o = true;
            break;
        }else{
            cnt += a[i].size()*c[i];
            //cout << "cnt:" << cnt << endl;
        }
    
    }
    return 0;


}