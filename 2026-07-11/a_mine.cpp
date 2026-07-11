#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt = 0;
    vector<int> x;
    cin >> n;
    for(int i = 0;i < n;i++){
        int tmp;
        cin >> tmp;
        x.push_back(tmp);
    }
    for(int i = 0;i < n;i++){
        if(x.at(i) < 0){
            cnt++;
        }
    }
    if(cnt == n){
        cout << "Yes\n";
    }else cout << "No\n";
    return 0;

}