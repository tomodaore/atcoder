#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    ll n,x,y,l,tmp;
    cin >> n;
    vector<ll> a[n];
    for(ll i = 0;i < n;i++){
        cin >> l;
        for(ll j = 0;j < l;j++){
            cin >> tmp;
            a[i].push_back(tmp);
        }
    }
    cin >> x >> y;
    cout << a[x-1][y-1] << endl;
    return 0;
}