#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,tmpr,tmpc,cnt = 0;
    cin >> n >> m;
    vector<pair<int,int>> rc;
    vector<int> chr(n,1);
    vector<int> chc(n,1);
    for(int i = 0;i < m;i++){
        cin >> tmpr >> tmpc;
        rc.push_back(make_pair(tmpr,tmpc));
    }
    for(int i = rc.size()-1;i >= 0;i--){
        if(chr.at(rc.at(i).first-1) == 1 && chc.at(rc.at(i).second-1) == 1){
            cnt++;
        }
        chr.at(rc.at(i).first-1) = 0;
        chc.at(rc.at(i).second-1) = 0;
    }
    cout << cnt << endl;
    return 0;
}