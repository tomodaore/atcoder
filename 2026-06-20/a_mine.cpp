#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    if(x % 16 == 0){
        int k = x / 16;
        if(y == k*9){
            cout << "Yes\n";
            return 0;
        }
        else{
            cout << "No\n";
            return 0;
        }
    }else{
        cout << "No\n";
        return 0;
    }
}