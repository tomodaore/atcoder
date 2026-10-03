#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int s = m/n;
    int k = m%n;
    for(int i = 0;i < n;i++){
        if(i < k){
            cout << s+1 << endl;
        }
        else{
            cout << s << endl;
        }
    }
    return 0;
}