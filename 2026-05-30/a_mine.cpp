#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,cnt = 0;
    cin >> n >> m;
    while(m != 0){
        m = n % m;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}