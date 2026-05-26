#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,q,x,y,cnt = 0,k = 0,ab = 0;
    cin >> n >> q;
    vector<ll> sum(n,0),all(2*q,0),have(n,0);
    all[0] = n;
    for(ll i = 0;i < q;i++){
        cin >> x >> y;
        if(x == 1){
            sum[y-1]++;
            all[sum[y-1] + k] += 1;
            all[sum[y-1] + k - 1] -= 1;
            if(have[y-1] == 0){
                have[y-1] = 1;
                cnt++;
            }
            if(cnt == n){
                k++;
                cnt -= all[k];
            }
        }else{
            for(ll j = y + k;j < q + k;j++){
                ab += all[j];
            }
            cout << ab << endl;
            ab = 0;
            
        }
    }
    // cout << "k:" << k << endl;
    // for(auto x : all){
    //         cout << x << endl;
    // }
    return 0;

}