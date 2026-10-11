#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int maxb = 0,cnt = 0;
    bool ch = false;
    for(int i = 0;i < n;i++){
        if(s.at(i) == 'R'){
            cnt++;

        }else{
            maxb = max(cnt,maxb);
            cnt = 0;
        }
    }
    maxb = max(cnt,maxb);
    cout << maxb << endl;

    return 0;
}