#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int h,w;
    vector<int> s;
    cin >> h >> w;

    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            int cnt = 0;
            for(int ci = 0;ci < h;ci++){
                for(int cj = 0;cj < w;cj++){
                    if(abs(i-ci) + abs(j-cj) == 1){
                        cnt++;
                    }
                }
            }
            s.push_back(cnt);
        }
    }
    for(int i = 0;i < h*w;i++){
        if(i % w == 0 && i != 0){
            cout << endl;
        }
        cout << s[i] << " ";
    }
    cout << endl;
    return 0;
}