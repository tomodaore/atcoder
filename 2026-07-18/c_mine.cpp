#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,cnt = 0;
    vector<int> a,b;
    vector<int> c;
    cin >> n >> m;
    for(int i = 0;i < n;i++){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    for(int i = 0;i < n-1;i++){
        int tmp;
        cin >> tmp;
        b.push_back(tmp);
    }
    for(int i = 0;i < n-1;i++){
        if((a.at(i)+a.at(i+1)) % m != b.at(i)){
            if(c.empty()){
                c.push_back(1);
                continue;
            }
            if(c.back() == 0){
                c.push_back(1);
            }else{
                c.back()++;
            }
        }else{
            c.push_back(0);
        }
    }
    
    for(auto i = c.begin();i != c.end();i++){
        if(*i % 2 == 0){
            cnt += *i / 2;
        }else{
            cnt += *i / 2 + 1;
        }
    }
    cout << cnt << endl;
    return 0;
}