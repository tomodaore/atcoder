#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int main(){
    ll cnt = 0;
    string s;
    cin >> s;
    for(ll i = 0;i < s.size();i++){
        if(s[i] == 'C'){
            if(s.size()/2 > i){
                cnt += i + 1;
            }else{
                cnt += s.size() - i;
            }
        }
    }
    cout << cnt << endl;
    return 0;

}