#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;
    ll x1,y1,r1,x2,y2,r2;
    for(int i = 0;i < t;i++){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        if((x2 - x1)*(x2 - x1) + (y2 - y1) *(y2 - y1) <= (r2 + r1)*(r2 + r1)){
            if((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2) < r1*r1 || (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2) < r2*r2){
                if(sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)) + r1 < r2 || sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)) + r2 < r1){
                    cout << "No\n";
                }else{
                    cout << "Yes\n";
                }
            }else{
                cout << "Yes\n";
            }
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}