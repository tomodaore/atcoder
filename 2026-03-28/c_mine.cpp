#include <iostream>
#include <map>
using namespace std;
using ll = long long;

int main(){
    ll q,h,p;
    int cnt = 0;
    map<ll,ll> mp;
    cin >> q;
    for(ll i = 0;i < q;i++){
        cin >> p >> h;
        ll tmp = 0;
        if(mp.count(h) == 0){
            mp[h] = 0; 
            auto y = mp.find(h);
            if(y != mp.begin()){
                y--;
                mp[h] = y->second;
                cout << "y first:" << y->first << " y second:" << y->second << endl;
                cout << "mp[" << h << "]:" << mp[h] << endl;
            }
        }
        if(p == 1){
            cnt++;
            mp[h]++;
            //cout << "p == 1" << endl;
            //cout << "mp[" << h << "]:" << mp[h] <<  endl;

        }else{
            cout << "p == 2\n" << "mp["<< h << "]:" << mp[h] << endl;
            cnt -= mp[h];
            for(auto x : mp){
                if(x.first > h) break;
                mp[x.first] = 0;
            }
        }
        cout << cnt << endl;
    }
    return 0;


}