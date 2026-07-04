#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt = 0;
    string s;
    vector<int> h,h1,h2;
    cin >> n >> s;
    for(int i = 0;i < n;i++){
        h.push_back(i+1);
    }
    
    for(int i = 0;i < n;i++){
        if(i == 0){
            if(s.at(n-1-i)== 'o'){
                cnt += 1;
            }
        }else{
            if(s.at(n-i-1) == 'o'){
                cnt += 1;
            }
        }
        
        if(cnt % 2 == 1){
            h1.push_back(h.at(h.size()-1-i));
        }else{
            h2.push_back(h.at(h.size()-1-i));
        }
    }
    for(auto x : h1){
        cout << x << " ";
    }
    for(auto i = h2.rbegin();i != h2.rend();i++){
        cout << *i << " ";
    }
    cout << endl;
    return 0;



}