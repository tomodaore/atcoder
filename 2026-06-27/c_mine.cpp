#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b,d,cnt = 0;
    cin >> n >> m;
    vector<vector<int>> pc(m+1);
    vector<int> color(n+1,0);
    vector<vector<int>> bard(n+1);
    for(int i = 0;i < n;i++){
        cin >> a >> d >> b;
        if(color.at(a) == 0){
            color.at(a) = 1;
            cnt++;
        }else{
            color.at(a)++;
        }
        pc.at(d).push_back(i);
        bard.at(i).push_back(a);
        bard.at(i).push_back(d);
        bard.at(i).push_back(b);
    }
    for(int i = 1;i < m+1;i++){
        if(pc.at(i).empty()){
            cout << cnt << endl;
        }else{
            for(auto x : pc.at(i)){
                if(color.at(bard.at(x).at(0)) == 1){
                    color.at(bard.at(x).at(0)) = 0;
                    cnt--;
                }else{
                    color.at(bard.at(x).at(0))--;
                }
                if(color.at(bard.at(x).at(2)) == 0){
                    cnt++;
                    color.at(bard.at(x).at(2))++;
                }else{
                    color.at(bard.at(x).at(2))++;
                }
            }
            cout << cnt <<endl;
        }
        //cout << i << ":" << cnt << endl;
        //cout << cnt << endl;
    }
    return 0;
}