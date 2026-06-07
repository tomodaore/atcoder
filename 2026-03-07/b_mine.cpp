#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,tmp;
    cin >> n >> m;
    vector<int> c;
    for(int i = 0;i < m;i++){
        cin >> tmp;
        c.push_back(tmp);
    }
    int a,b,cnt = 0;
    for(int i = 0;i < n;i++){
        cin >> a >> b;
        if(b <= c.at(a-1)){
            c.at(a-1) -= b;
            cnt += b;
            //cout << "cnt:" << cnt << endl;
        }else{
            if(c.at(a-1) > 0){
                cnt += c.at(a-1);
                c.at(a-1) = 0;
                //cout << "cnt:" << cnt << endl;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}