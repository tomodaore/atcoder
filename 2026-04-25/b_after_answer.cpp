#include <iostream>
#include <vector>
using namespace std;

int main(){
    int h,w,cnt = 0;
    cin >> h >> w;
    vector<char> t[h];
    vector<int> ch[h];
    char s;
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            cin >> s;
            t[i].push_back(s);
        }
    }
    for(int h1 = 0;h1 < h;h1++){
        cout << "re h1:" << h1 << "->" << h1+1 << endl;
        for(int h2 = h1;h2 < h;h2++){
            cout << "re h2:" << h2 << "->" << h2+1 << endl;
            for(int w1 = 0;w1 < w;w1++){
                cout << "re w1:" << w1 << "->" << w1+1 << endl;
                for(int w2 = w1;w2 < w;w2++){
                    cout << "re w2:" << w2 << "->" << w2+1 << endl;
                    bool ok = true;
                    
                    for(int i = h1;i <= h2;i++){
                        for(int j = w1;j <= w2;j++){
                            cout << "i:" << i+1 << " j:" << j+1 << " i:" << h1+h2-i+1 << " j:" << w1+w2-j+1 << endl;
                            if(t[i][j] != t[h1+h2-i][w1+w2-j]){
                                ok = false;
                            }
                        }
                    }
                    if(ok){
                        cnt++;
                    } 
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}