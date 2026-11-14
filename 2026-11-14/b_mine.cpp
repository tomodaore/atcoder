#include <bits/stdc++.h>
using namespace std;

int main(){
    int k ;
    vector<int> a;
    bool ok = false;
    cin >> k;
    for(int i = 0;i < k;i++){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
        if(tmp == 9){
            ok = true;
        }
    }
    if(ok == false){
        cout << -1 << endl;
    }else{
        auto mina = min_element(a.begin(),a.end());
        cout << *mina << endl;
    }
    return 0;
}