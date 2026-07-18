#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;
    for(int i = 0;i < t;i++){
        ll px,py,qx,qy,rx,ry,sx,sy;
        cin >> px >> py >> qx >> qy >> rx >> ry >> sx >> sy;
        ll rs = ry - sy;
        ll pq = py - qy;
        if(rs == 0 || pq == 0){
            if(rs == 0){
                rs = rx - ry;
                if(rs == 0){
                    cout << "No\n";
                }else{
                    cout << "Yes\n";
                }
            }else{
                ll pq = px -qx;
                if(pq == 0){
                    cout << "No\n";
                }else{
                    cout << "Yes\n";
                }
            }
            continue;
        }
        ll l = (rx*rx + ry*ry - sx*sx - sy*sy)/(2*(ry-sy)) - (px*px + py*py - qx*qx - qy*qy)/(2*(py-qy));
        ll r = (rx-sx)/(ry-sy) - (px-qx)/(py-qy);
        if(l == 0 || r == 0){
            cout << "No\n";
        }else{
            cout << "Yes\n";
        }
    }
    return 0;
}