#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    string s;
    cin >> t;
    for(int i = 0;i < t;i++){
        long long tmp,cnt = 0;
        cin >> n;
        cin >> s;
        vector<long> a(n),b(n);
        for(int j = 0;j < n;j++){
            cin >> tmp;
            a.push_back(tmp);
        }
        for(int j = 0;j < n-1;j++){
            cin >> tmp;
            b.push_back(tmp);
        }
        for(int x = 0;x < s.size();x++){
            if(s.at(x) == 'S' && s.at(x+1) == 'S'){
                if((a.at(x) < b.at(x))){
                    if(x == 0){
                        s.at(x) = 'R';
                        cnt += (b.at(x)-a.at(x)); 
                    }else{
                        if()
                    }
                }
            }
            else if(s.at(x) == 'S' && s.at(x+1) == 'R'){
                if(a.at(x)+a.at(x+1) < b.at(x)){
                    s.at(x) = 'R';
                    s.at(x+1) = 'S';
                    cnt += (b.at(x)-a.at(x)-a.at(x+1)); 
                }
            }
        } 
    }
}