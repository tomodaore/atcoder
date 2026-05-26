/*
sを一つずつ見ていってvectorにその位置を入れていき、それを二分探索で組み合わせを探す。
例えば
aabcbaの時は
vector<int> a = {0,1,5}となる。
この時push_backしたときに、a.rbegen()+(a.size()/2)で真ん中をみて、
LとRの範囲により値を決めて、その時のイテレータとa.rbegen()を引くと、
その間の数がわかり、組み合わせを計算する。
多分O(NlogN)
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,l,r;
    cin >> n >> l >> r;
    string s;
    cin >> s;
}