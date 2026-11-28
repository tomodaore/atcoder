#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0;i < k;i++){
        for(int j = n/k; ; ){
            if(i+(j * k) >= n){
                j -= 1;
            }
            if(j <= 0){
                if(j == 0 && s.at(i) == 'o'){
                    cnt++;
                   
                }
                break;
            }
            if(s.at(i+(j*k)) == 'o' && s.at(i+((j - 1)*k)) != 'o'){
                cnt++;
                
                j -= 1;
            }
            j--;
        }
    }
    cout << cnt << endl;
    return 0;

}