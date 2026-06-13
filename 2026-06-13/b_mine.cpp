#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,a;
    cin >> n;
    vector<vector<int>> ans(n);
    for(int i = 0;i < n;i++){
        cin >> k;
        for(int j = 0;j < k;j++){
            cin >> a;
            ans.at(a-1).push_back(i+1);
        }
    }
    for(auto x : ans){
        cout << x.size() << " ";
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}