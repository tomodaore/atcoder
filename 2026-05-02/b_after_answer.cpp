#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a[3];
    int tmp;
    float cnt = 0.;
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 6;j++){
            cin >> tmp;
            a[i].push_back(tmp);
        }
    }

    for(int i = 0;i < 6;i++){
        for(int j = 0;j < 6;j++){
            for(int k = 0;k < 6;k++){
                if((a[0][i] == 4 && a[1][j] == 5 && a[2][k] == 6)
                || (a[0][i] == 4 && a[1][j] == 6 && a[2][k] == 5)
                || (a[0][i] == 5 && a[1][j] == 4 && a[2][k] == 6)
                || (a[0][i] == 5 && a[1][j] == 6 && a[2][k] == 4)
                || (a[0][i] == 6 && a[1][j] == 5 && a[2][k] == 4)
                || (a[0][i] == 6 && a[1][j] == 4 && a[2][k] == 5)){
                    cnt++;
                }
            }
        }
    }
    cout << (cnt/216) << endl;
}