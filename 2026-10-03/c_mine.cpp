#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ,k,tmp;
    cin >> n >> k;
    vector<int> a,b;
    for(int i = 0;i < n;i++){
        cin >> tmp;
        a.push_back(tmp);
        b.push_back(tmp);
    }
    sort(b.begin(),b.end());
    int st = -1,ed = -1;
    for(int i = 0;i < n;i++){
        if(a.at(i) != b.at(i)){
            st = i;
            break;
        }
    }
    if(st == -1){
        cout << "Yes\n";
        return 0;
    }
    for(int i = a.size()-1;i >= 0;i--){
        if(a.at(i) != b.at(i)){
            ed = i;
            break;
        }
    }
    //cout << st << ":" << ed << endl;
    if(ed - st <= k - 1){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
    return 0;

}