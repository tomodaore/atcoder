/*
構想
abbcをa|bb|cのように分けてそれぞれの通りを数える。
aはあるかなしかの２通り、bbは一つ目のbをとるか２個目をとるか、どっちもとるかの３択。
cもaと同じく２通り。
そしたら全部で１２通りだが空集合を選ばないのでabbc全部を取ってしまうのを外す。と
11通りとなる。
これを作成する。

ほかのサンプルでやってみたら間違えてた。
答えを見て、dpでやるとのこと。
末尾がaで終わるものと,cで終わるものにはbを付けれて、
dp['b'] = dp['a'] + dp['b'] + dp['c']
とすることでもともとbで終わるものにaとcで終わるものをつけて、そこに
今回追加されたbだけのものとして+1することですべてを数えることができる。

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int cnt = 1;
    string s;
    cin >> s;
    auto start_i = s.begin();
    for(auto i = s.begin();i != s.end();i++){

    }

}