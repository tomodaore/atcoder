#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt = 0;
    string s;
    cin >> n >> s;
    for(int i = 0;i < n;i++){
        if(s.at(i) == 'x'){
            if(i == 0 || s.at(i-1) == 'x'){
                if(i == s.size() - 1 || s.at(i+1) == 'x'){
                    cnt++;
                }
            }
        }
        
    }
    cout << cnt << endl;
    return 0;
}