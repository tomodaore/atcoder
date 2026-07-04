#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;
    for(int i = 0;i < t;i++){
        ll x,y,k,cnt = 0;
        cin >> x >> y >> k;
        while(x != y){
            if(x > y){
                x = x / k;
            }else{
                y = y / k;
            }
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}