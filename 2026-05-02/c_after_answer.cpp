#include <iostream>
#include <string>
using namespace std;
#define devine 998244353

int main(){
    string s;
    long long cnt = 0;
    int start_i = 0;
    cin >> s;
    for(int i = 0;i < s.size();i++){
        if(i > start_i && s[i] == s[i-1]){
            //cout << start_i << ":" << s[start_i] << ":" << i << ":" << s[i] << ":" << (long long) ((i - start_i) * (i - start_i + 1) / 2) << endl;
            cnt += (long long) ((i - start_i) * (i - start_i + 1) / 2);
            start_i = i;
        }
    }
    //cout << s[start_i] << ":" << s[s.size()] << ":" << (long long) ((s.size() - start_i) * (s.size() - start_i + 1) / 2) << endl;
    cnt += (long long) ((s.size() - start_i) * (s.size() - start_i + 1) / 2);

    cout << cnt % devine << endl;
    return 0;
}