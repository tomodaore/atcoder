#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y,mny,mnx,mnxy,mnyx,cnt = 0,cntt = 0;
    bool okx = true,oky = true;
    cin >> n;
    map<int,int> xy;
    for(int i = 0;i < n;i++){
        cin >> x >> y;
        if(i == 0){
            mnx = x;
            mnxy = y;
            mny = y;
            mnyx = x;
        }else{
            // mnx = min(mnx,x);
            // mny = min(mny,y);
            if(mnx >= x){
                mnx = x;
                if(okx){
                    okx = false;
                    mnxy = y;
                }else{
                    mnxy = min(mnxy,y);
                }
            }
            if(mny >= y){
                mny = y;
                if(oky){
                    oky = false;
                    mnyx = x;
                    //cout << "mnyx:" << mnyx << endl;
                }else{
                    mnyx = min(mnyx,x);
                    //cout << "mnyx:" << mnyx << endl;
                }
            }
        }
        xy.insert(make_pair(x,y));
    }
    cout << mnx << ":" << mny << endl;
    cout << mnyx << ":" << mnxy << endl;
    for(auto p : xy){
        if(p.first <= mnyx && p.second <= mnxy){
            cnt++;
        }
        else if(p.first <= mnx || p.second <= mny){
            cnt++;
        }
    }
    cout << cnt << endl;
    //cout << cntt << endl;
    return 0;
}