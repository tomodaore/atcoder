#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,check;
    char x;
    string S;
    vector<string> s;
    cin >> n >> x;
    for(int i = 0;i < n;i++){
        cin >> S;
        s.push_back(S);
    }
    check = x - 'A';
    for(auto v : s){
        if(v.at(check) == 'o'){
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";

    return 0;
}