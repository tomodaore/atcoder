#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt = 0;
    cin >> n;
    for(int i = 0;i < n;i++){
        int tmp;
        cin >> tmp;
        if(i % 2 == 0){
            cnt += tmp;
        }
    }
    cout << cnt << endl;
    return 0;
}