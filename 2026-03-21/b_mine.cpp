#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    long long c;
    cin >> n;
    vector<long long> v[n];
    for(int i = 0;i < n - 1;i++){
        for(int j = i + 1;j < n;j++){
            cin >> c;
            v[i].push_back(c);
        }
    }
    // cout << "k" << endl;
    // for(auto x : v){
    //     for(auto y : x){
    //         cout << y;
    //     }
    //     cout << endl;
    // }
    // return 0;
    for(int a = 0;a < n - 2;a++){
        for(int b = a + 1;b < n - 1;b++){
            for(int c = b + 1;c < n;c++){
                if(v[a].at(b-a-1)+v[b].at(c-b-1) < v[a].at(c-a-1)){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;

}