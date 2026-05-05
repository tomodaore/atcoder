/*
同じものを重ねることでどれを取り除くのかをすぐに選べるようにした。
数学的にはランレングス圧縮というらしい。
構想はよかったがO(N^2)となってしまう箇所があったためTLE
一次元のベクトルにしてO(N)にできた。

*/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    map<long long,long long> dp;
    vector<int> a;
    int n,k;
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
    for(int i = 0;i < k;i++){
        long long mx_dp = 0,pt_mx_dp = 0;
        for(auto[o,v] : dp){
            if(mx_dp < v){
                mx_dp = v;
                pt_mx_dp = o;
            }
        }
        //cout << pt_mx_dp << ":" ;
        //cout << dp[pt_mx_dp] << endl;
        dp[pt_mx_dp] = 0;
    }
    long long sum = 0;
    for(auto[o,v]:dp){
        sum += v;
    }
    cout << sum << endl;
    return 0;
}