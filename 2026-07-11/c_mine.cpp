#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,l,r,now,cnt = 0;
    string s;
    cin >> n;
    for(int i = 1;i < n;i++){
        l = i;
        r = n;
        now = r;
        if(r - 1 == l){
            cout << "? " << r << " " << l << endl;
            cin >> s;
            if(s == "Yes"){
                cnt++;
            }
        }else{
            while(!(r - l <= 1)){
                cout << "? " << i << " " << now << endl;
                cin >> s;
                if(s == "Yes"){
                    cnt += now - l;
                    l = now;
                    // if(r-1 == l){
                    //     break;
                    // }else{
                    //     now = (r + l )/2;
                    // }

                    now = (r + l) / 2;
                }else{
                    now = (now + l) /2;

                }
                //cout << "now:" << now << " l:" << l << " r:" << r << endl;
            }
            cnt += l*(l-1)/2;
        }
    }
    cout << "! " << cnt << endl;
    return 0;
}