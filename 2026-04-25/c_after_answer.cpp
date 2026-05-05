/*
学んだこと
vector<int>の合計は numeric の std::reduceでとれる。
algorithmのsortでvector<int>をソートすることができる。
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    map<long long,long long> dp;
    vector<long long> a;
    long long n,k;
    long long tmp;
    cin >> n >> k;
    //cout << "入力確認" << endl;
    for(int i = 0;i < n;i++){
        cin >> tmp;
        if(dp[tmp] == 0){
            dp[tmp] = tmp;
            //cout << tmp << ":" << dp[tmp] << endl;
        }else{
            dp[tmp] += tmp;
            //cout << tmp << ":" << dp[tmp] << endl;
        }
    }
    // for(auto[k,v] : dp){
    //     cout << "dp:" << k << ":" << v << endl;
    // }
    for(auto[o,v] : dp){
        a.push_back(v);
    }
    sort(a.begin(),a.end());
    for(int i = 0;i < k;i++){
        if(!a.empty()) a.pop_back();
    }
    long long sum = 0;
    sum = reduce(a.begin(),a.end());
    cout << sum << endl;
    return 0;
}