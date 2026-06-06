#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,tmp;
    vector<int> a,b;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> tmp;
        a.push_back(tmp);
    }
    for(int i = 0;i < n;i++){
        cin >> tmp;
        b.push_back(tmp);
    }
    for(int i = 0;i < n;i++){
        if(i != b.at(a.at(i)-1)-1){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}