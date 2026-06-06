#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w,q;
    cin >> h >> w >> q;
    int x,y;
    for(int i = 0;i < q;i++){
        cin >> x >> y;
        if(x == 1){
            cout << y*w << endl;
            h -= y;
        }else{
            cout << y*h << endl;
            w -= y;
        }
    }
    return 0;
}