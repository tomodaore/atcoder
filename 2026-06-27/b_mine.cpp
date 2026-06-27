#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> hw(h);
    for(auto& s : hw){
        cin >> s;

    }
    int up = 0,down = h-1,left = 0,right = w-1;
  
    while(!hw.empty()){
        bool ok = false;
        for(auto x : hw.at(up)){
            if(x == '#'){
                ok = true;
            }
        }
        if(ok == false) up++;
        if(ok) break;  
    }
    while(!hw.empty()){
        bool ok = false;
        for(auto x : hw.at(down)){
            if(x == '#'){
                ok = true;
            }
        }
        if(!ok) down--;
        if(ok) break;
    }

    while(!hw.empty()){
        bool ok = false;
        for(int i = up;i <= down;i++){
            if(hw.at(i).at(left) == '#'){
                ok = true;
            }
        }
        if(!ok) left++;
        if(ok) break;
    }
   
        while(!hw.empty()){
        bool ok = false;
        for(int i = up;i <= down;i++){
            if(hw.at(i).at(right) == '#'){
                ok = true;
            }
        }
        if(!ok) right--;
        if(ok) break;
    }

    for(int i = up;i <= down;i++){
        for(int j = left;j <= right;j++){
            cout << hw.at(i).at(j);
        }
        cout << endl;
    }



    return 0;
}