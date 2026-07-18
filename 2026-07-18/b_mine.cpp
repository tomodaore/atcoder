#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt = 0;
    cin >> n;
    for(int i = 0;i < n;i++){
        int tmpa,tmpb;
        string tmps;
        cin >> tmpa >> tmpb >> tmps;
        if(tmps == "keep"){
            cnt += tmpb - tmpa;

        }
    }
    cout << cnt << endl;
    return 0;


}