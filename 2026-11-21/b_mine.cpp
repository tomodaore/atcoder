#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<string> s(n);
    for(int i = 0;i < n;i++){
        cin >> s[i];
    }   
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(s.at(i).at(j) == 'x' && j != m - 1){
                continue;
            }
            if(j == m -1 && s.at(i).at(j) == 'x'){
                cout << "Faucet " << i+1 << endl; 
                return 0;
            }else{
                break;
            }
        }
    }
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            if(s.at(j).at(i) == 'x' && j != n - 1){
                continue;
            }if(s.at(j).at(i) == 'x' && j == n - 1){
                cout << "Drain " << i+1 << endl;
                return 0;
            }else{
                break;
            }
        }
    }
    return 0;
}