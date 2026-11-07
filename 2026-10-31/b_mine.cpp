#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> s;
    int maxo = 0;
    for(int i = 0;i < 5;i++){
        string tmp;
        cin >> tmp;
        s.push_back(tmp);
    }
    // 縦
    for(int i = 0;i < 5;i++){
        int cnt = 0;
        for(int j = 0;j < 5;j++){
            if(s.at(i).at(j) == 'o'){
                cnt++;
            }
        }
        maxo = max(maxo,cnt);
    }
    // 横
    for(int i = 0;i < 5;i++){
        int cnt = 0;
        for(int j = 0;j < 5;j++){
            if(s.at(j).at(i) == 'o'){
                cnt++;
            }
        }
        maxo = max(maxo,cnt);
    }
    //斜め
    for(int i = 0;i < 2;i++){
        int cnt = 0;
        for(int j = 0;j < 5;j++){
            if(s.at((i == 0 ? 0 : 4) + (i == 0 ? 1 : -1) * j).at(j) == 'o'){
                cnt++;
            }
        }
        maxo = max(maxo,cnt);
    }
    cout << 5 - maxo << endl;
    return 0;
}