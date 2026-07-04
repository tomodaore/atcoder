#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,l,r,a,b,cnt = 0;
    cin >> x >> y >> l >> r >> a >> b;
    if(l > a){
        if(b < l){
            cnt += y*(b-a);
            cout << cnt << endl;
            return 0;
        }
        cnt += (y*(l - a));
        if(r < b){
            cnt += (r - l)*x + y*(b - r);
        }else{
            cnt += x*(b - l);
        }
        cout << cnt << endl;
        return 0;
    }else{
        if(r < a){
            cnt += y*(b-a);
            cout << cnt << endl;
            return 0;
        }
        if(r < b){
            cnt += (r - a)*x + y*(b - r);
        }else{
            cnt += x*(b - a);
        }
        cout << cnt << endl;
        return 0;
    }
}