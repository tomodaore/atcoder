#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<tuple<int,int,int>> event;
    int l,r,x;
    for(int i = 0;i < q;i++){
        cin >> l >> r >> x;
        l--;
        x--;
        event.emplace_back(l,x,1);
        event.emplace_back(r,x,-1);
    }
    event.emplace_back(n,0,0);
    sort(event.begin(),event.end());
    vector<int> counter(q,0);
    int now = 0,ans = 0;

    for(auto [t,a,b] : event){
        while(t != now){
            now++;
            cout << ans << " ";
        }
        if(counter[a] == 0) ans++; 
        counter[a] += b;
        if(counter[a] == 0) ans--;

    }
    cout << endl;
    return 0;
}