#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n,v,cnt = 0,maxw = 0;
    priority_queue<ll> q;
    vector<ll> w;
    cin >> n >> v;
    int tmpw;
    for(int i = 0;i < n;i++){
        cin >> tmpw;
        w.push_back(tmpw);
    }
    for(int i = 0;i < n-2;i++){
        for(int j = i+1;j < n-1;j++){
            for(int k = j+1;k < n;k++){
                if(maxw <= (w.at(i)+w.at(j)+w.at(k)) && i+j+k+3 <= v){
                    maxw = (w.at(i)+w.at(j)+w.at(k));
                    // cout << "w.at(" << i << "):" << w.at(i) << "w.at(" << k << "):" << w.at(k) << "w.at(" << k << "):" << w.at(k) << endl;
                    // cout << maxw << endl;
                }
            }
        }
    }
    cout << maxw << endl;
    return 0;
}