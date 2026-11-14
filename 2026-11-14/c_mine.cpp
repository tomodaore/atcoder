#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,tmp;
    vector<int> a,b;
    cin >> n;
    for(int j = 0;j < 2;j++){
        for(int i = 0;i < n;i++){
            cin >> tmp;
            if(j == 0){
                a.push_back(tmp);
            }else{
                b.push_back(tmp);
            }
        }
    }
    int key,ch = 0,k = 0;
    bool ok = false;
    for(int i = 0;i < n;i++){
        if(ch == 0 && ok){
            cout << "No\n";
            return 0;
        }
        if(ch == 0){
            if(a.at(i) != b.at(i)){
                ok = true;
                if(i == n - 1){
                    cout << "No\n";
                    return 0;
                }
                if(a.at(i) == b.at(i+1)){
                    ch = 1;
                    key = b.at(i);
                }else if(a.at(i+1) == b.at(i)){
                    ch = 2;
                    key = a.at(i);
                }
            }
        }else if(ch == 1){
            if(a.at(i-1+k) != b.at(i)){
                if(a.at(i-1) != key){
                    cout << "No\n";
                    return 0;
                }
                else{
                    k = 1;
                }
            }
            if(i == n - 1 && k == 0){
                if(a.at(i) != key){
                    cout << "No\n";
                    return 0;
                }
            }
        }else{
            if(a.at(i) != b.at(i-1+k)){
                if(b.at(i-1) != key){
                    cout << "No\n";
                    return 0;
                }else{
                    k = 1;
                }
            }
            if(i == n - 1 && k == 0){
                if(b.at(i) != key){
                    cout << "No\n";
                    return 0;
                }
            }
        }
        
    }
    cout << "Yes\n";
    return 0;
}