#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,c,s;
    cin >> n >> m;
    vector<priority_queue<int>> cs(m);
    for(int i = 0;i < n;i++){
        cin >> c >> s;
        cs.at(c-1).push(s);
    }
    for(int i = 0;i < m;i++){
        if(!cs.at(i).empty()){
            cout << cs.at(i).top() << " ";
        }else{
            cout << -1 << " ";
        }
    }   
    cout << endl;
    return 0;
}